#include "timetabledialog.h"
#include "ui_timetabledialog.h"

TimeTableDialog::TimeTableDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TimeTableDialog)
{
    ui->setupUi(this);
    showCoursePage = new showCourseInfo();
    setWindowTitle("课程表");

    connect(showCoursePage, &showCourseInfo::courseBackToTimeTable, this, &TimeTableDialog::openTimeTable);

}

TimeTableDialog::~TimeTableDialog()
{
    delete ui;
}
void TimeTableDialog::openTimeTable()
{
    this->show();
}
void TimeTableDialog::showTimetable()
{
    for(auto it : theCache->getCacheCourse())
    {
        QString strText;
        int col;//列
        strText = QString::fromStdString(it.getCourseName() + "\n" + it.getCoursePlace() + "\n" + it.getTeacher());
        col = (int)it.getCourseTime()->getweekday();

        for(auto row : it.getSection())
        {
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setText(strText);
            ui->courseInfo->setItem(row-1, col, item);
        }
    }
}
//槽函数
void TimeTableDialog::on_searchCourseButton_clicked()
{
    string courseToSearch;
    courseToSearch = ui->searchCourseEdit->text().toStdString();
    if(courseToSearch == "")
    {
        QMessageBox::warning(this, tr("attention"), tr("未输入"),QMessageBox::Ok);

    }
    else
    {
        QString QtextLog = "搜索" + ui->searchCourseEdit->text() + "的课程信息\n";
        Request::log(QtextLog.toStdString());
        showCoursePage->show();
        showCoursePage->setCourseToShow(courseToSearch);
        showCoursePage->searchCourseInfo();
        showCoursePage->searchHomeworkInfo();
        showCoursePage->searchMaterialInfo();
        this->close();
    }
}

void TimeTableDialog::on_pushButton_clicked()
{
    this->close();
    emit backToMain();
}

void TimeTableDialog::on_searchWayButton_clicked()
{
    string nameOrTime;
    QString start = ui->startEdit->text();
    nameOrTime = ui->courseOrTimeEdit->text().toStdString();
    if(Response::searchByTimeOrPlace(*theLoginUser, *theCache, nameOrTime).empty())
        QMessageBox::warning(this, "WARNING", "无此课程信息", QMessageBox::Ok);
    Map *theMap = new Map();
    Request::log("导航到" + Response::searchByTimeOrPlace(*theLoginUser, *theCache, nameOrTime)[0].getCourseName() + "课程\n");
    ui->wayInfo->append(start + "\n");
    for(auto it : theMap->dijkstra(start, "路口63", 1, 1))
    {
        QString text;
        text = "->" + it.end.name;
        ui->wayInfo->append(text);
    }
    ui->wayInfo->append("已到达目的地附近，导航结束~");
}

void TimeTableDialog::on_cancelSearchButton_clicked()
{
    ui->startEdit->clear();
    ui->courseOrTimeEdit->clear();
    ui->wayInfo->clear();
}
