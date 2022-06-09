#ifndef SHOWCOURSEINFO_H
#define SHOWCOURSEINFO_H

#include <QDialog>
#include<QFileDialog>
#include<QString>
#include"Response.h"
#include"Request.h"
#include<vector>
namespace Ui {
class showCourseInfo;
}

class showCourseInfo : public QDialog
{
    Q_OBJECT

public:
    explicit showCourseInfo(QWidget *parent = nullptr);
    ~showCourseInfo();
    void setCourseToShow(string course);
    string getCourseToShow();
    void searchCourseInfo();
    void searchHomeworkInfo();
    void searchMaterialInfo();
private slots:
    void on_exitButton_clicked();
    void on_materialButton_clicked();

    void on_homeworkButton_clicked();

signals:
    void courseBackToTimeTable();

private:
    Ui::showCourseInfo *ui;
    string courseToShow;
};

#endif // SHOWCOURSEINFO_H
