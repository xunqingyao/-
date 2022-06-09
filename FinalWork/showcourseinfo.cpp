#include "showcourseinfo.h"
#include "ui_showcourseinfo.h"

showCourseInfo::showCourseInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showCourseInfo)
{
    ui->setupUi(this);
    setWindowTitle("课程信息");


}

showCourseInfo::~showCourseInfo()
{
    delete ui;
}

void showCourseInfo::setCourseToShow(string course)
{
    this->courseToShow = course;
}

string showCourseInfo::getCourseToShow()
{
    return courseToShow;
}

//课程信息
void showCourseInfo::searchCourseInfo()
{
    if(Response::searchCourse(*theLoginUser,*theCache,this->getCourseToShow()).empty())
    {
        ui->CourseInfoEdit->append("无信息");
        return;
    }
    for(auto it :  Response::searchCourse(*theLoginUser,*theCache,this->getCourseToShow()))
    {
        string infoToShow;
        infoToShow = "课程名称： " + it.getCourseName() + "\n课程时间： " + it.getCourseTime()->toString() + "\n课程地点： " +
                     it.getCoursePlace() +"\n考试时间： " + it.getExaminationTime()->toString() +"\n考试地点： " +
                      it.getExaminationPlace() +"\n\n";
        ui->CourseInfoEdit->append(QString::fromStdString(infoToShow));
    }
    string progressToShow = "课程进度：" + Response::getProgress();
    ui->CourseInfoEdit->append(QString::fromStdString(progressToShow));
}
//作业信息
void showCourseInfo::searchHomeworkInfo()
{
    ui->homeworkEdit->clear();
    if(Response::searchHomework(*theLoginUser,this->getCourseToShow()).empty())
    {
        ui->homeworkEdit->append("无信息");
        return;
    }
    for(auto it :  Response::searchHomework(*theLoginUser,this->getCourseToShow()))
    {
        string homeworkToShow;
        homeworkToShow = it +"\n";
        ui->homeworkEdit->append(QString::fromStdString(homeworkToShow));
    }
}
//资料
void showCourseInfo::searchMaterialInfo()
{
    ui->materialEdit->clear();
    if(Response::searchMaterial(*theLoginUser,this->getCourseToShow()).empty())
    {
        ui->materialEdit->append("无信息");
        return;
    }
    for(auto it :  Response::searchMaterial(*theLoginUser,this->getCourseToShow()))
    {
        string materialToShow;
        materialToShow = it +"\n";
        ui->materialEdit->append(QString::fromStdString(materialToShow));
    }
}

//槽函数
void showCourseInfo::on_exitButton_clicked()
{
    ui->CourseInfoEdit->clear();
    ui->homeworkEdit->clear();
    ui->materialEdit->clear();
    emit courseBackToTimeTable();//回Main
    this->close();
}

void showCourseInfo::on_materialButton_clicked()
{
    QString fileUrl = QFileDialog::getOpenFileName(this, "打开","C:/");
    QStringList list = fileUrl.split("/");
    QString fileName = list.last();
    QString newUrl = fileUrl.replace(QRegExp("\\/"), "\\");
    Request::postCourseInfo(*theLoginUser,newUrl.toStdString(), fileName.toStdString(), courseToShow, 0);
    QString textLog = "上传课程资料" + fileName + "\n";
    Request::log(textLog.toStdString());
    searchMaterialInfo();
}

void showCourseInfo::on_homeworkButton_clicked()
{
    QString fileUrl = QFileDialog::getOpenFileName(this, "打开","C:/");
    QStringList list = fileUrl.split("/");
    QString fileName = list.last();
    QString newUrl = fileUrl.replace(QRegExp("\\/"), "\\");
    Request::postCourseInfo(*theLoginUser,newUrl.toStdString(), fileName.toStdString(), courseToShow, 1);
    QString textLog = "上传课程作业" + fileName + "\n";
    Request::log(textLog.toStdString());
    searchHomeworkInfo();
}
