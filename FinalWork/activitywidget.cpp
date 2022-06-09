#include "activitywidget.h"
#include "ui_activitywidget.h"

activityWidget::activityWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::activityWidget)
{
    ui->setupUi(this);
}

activityWidget::~activityWidget()
{
    delete ui;
}

void activityWidget::setActivity(string activity)
{
    this->activityName = activity;
}

void activityWidget::on_exitButton_clicked()
{
    ui->textEdit->clear();
    emit backToMain();
    this->close();
}

void activityWidget::on_searchActivityButton_clicked()
{
    ui->textEdit->clear();
    string activityToShow;
    activityToShow = ui->searchActiVityEdit->text().toStdString();
    QString textLog = "搜索" + ui->searchActiVityEdit->text() + "活动\n";
    Request::log(textLog.toStdString());
    if(Response::searchActivity(*theLoginUser,*theCache,activityToShow).empty())
    {
        QMessageBox::warning(this,"ATTENETION", "无活动信息", QMessageBox::Ok);
        return;
    }
    for(auto it : Response::searchActivity(*theLoginUser,*theCache,activityToShow))
    {
        string toShow;
        toShow = it.getActivityName() + "\n" +
                 it.getMonth() + "月 " +
                 it.getDate() + "日\n" +
                 it.getStarttime()->tostring() + "---" +
                 it.getEndtime()->tostring();
        ui->textEdit->append(QString::fromStdString(toShow));
    }
}

void activityWidget::on_addActivityButton_clicked()
{
    string activityName;
    activityName = ui->addActivityName->text().toStdString();
    QStringList activityTime = ui->addActivityTime->text().split(" ");
    AfterActivity newActivity;
    newActivity.setMonth(activityTime[0].toStdString());
    newActivity.setDate(activityTime[1].toStdString());
    //时间
    Time startTime,endTime;
    QStringList start = ui->startTime->text().split(":");
    QStringList end = ui->endTime->text().split(":");
    startTime.setHour(start[0].toInt());
    startTime.setMinute(start[1].toInt());
    endTime.setHour(end[0].toInt());
    endTime.setMinute(end[1].toInt());
    newActivity.setStartTime(startTime);
    newActivity.setEndTime(endTime);
    if(ui->teamcheckBox->isChecked())
    {
        newActivity.setType(true);
    }
    //finish activity
    QString textLog = "添加" + QString::fromStdString(activityName) + "活动\n";
    Request::log(textLog.toStdString());
    //日志
    vector<CourseInformation> conflictcourse;
    vector<AfterActivity> conflictactivity;
    bool judge = Request::postActivity(*theLoginUser, newActivity, *theCache, conflictcourse, conflictactivity);
    if(judge == false)
    {
        QMessageBox::warning(this, "WARNING", "发生冲突，添加失败", QMessageBox::Ok);
    }
}

void activityWidget::on_cancelAddButton_clicked()
{
    ui->startTime->clear();
    ui->endTime->clear();
    ui->addActivityName->clear();
    ui->addActivityTime->clear();
}
