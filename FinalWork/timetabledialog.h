#ifndef TIMETABLEDIALOG_H
#define TIMETABLEDIALOG_H

#include <QDialog>
#include <vector>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QString>
#include <string>
#include "showcourseinfo.h"
#include "Response.h"
#include "Request.h"
#include "Cache.h"
#include "map.h"
using namespace std;
namespace Ui {
class TimeTableDialog;
}

class TimeTableDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TimeTableDialog(QWidget *parent = nullptr);
    ~TimeTableDialog();
    void openTimeTable();
    void showTimetable();
signals:
    void backToMain();
private slots:
    void on_searchCourseButton_clicked();

    void on_pushButton_clicked();

    void on_searchWayButton_clicked();

    void on_cancelSearchButton_clicked();

private:
    Ui::TimeTableDialog *ui;
    showCourseInfo *showCoursePage;
};

#endif // TIMETABLEDIALOG_H
