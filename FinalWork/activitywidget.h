#ifndef ACTIVITYWIDGET_H
#define ACTIVITYWIDGET_H

#include <QWidget>
#include <string>
#include <vector>
#include <QMessageBox>
#include "UserInfo.h"
#include "Cache.h"
#include "Response.h"
#include "Request.h"
#include "AfterActivity.h"
#include "MyTime.h"
#include "CourseInformation.h"
using namespace std;
namespace Ui {
class activityWidget;
}

class activityWidget : public QWidget
{
    Q_OBJECT

public:
    explicit activityWidget(QWidget *parent = nullptr);
    ~activityWidget();
    void setActivity(string activity);
    void showActivityInfo();
private slots:
    void on_exitButton_clicked();

    void on_searchActivityButton_clicked();

    void on_addActivityButton_clicked();

    void on_cancelAddButton_clicked();

signals:
    void backToMain();

private:
    Ui::activityWidget *ui;
    string activityName;
};

#endif // ACTIVITYWIDGET_H
