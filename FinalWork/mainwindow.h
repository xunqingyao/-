#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTime>
#include<QTimer>
#include<QTimerEvent>
#include<QDateTime>
#include<QDebug>
#include<QString>
#include<string>
#include<fstream>
#include"logindialog.h"
#include"activitywidget.h"
#include"mapdialog.h"
#include"timetabledialog.h"
#include"Request.h"
#include"Response.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void openMainWindow();
    void updateTime();
    void saveTime();
private slots:

    void successfulLogin(string);
    void newAlarmAndAdd(QString, QString);
    void on_activityButton_released();//活动
    void on_mapButton_clicked();//地图

    void on_exitButton_clicked();//退出登录

    void on_timeTableButton_clicked();

    void on_addButton_clicked();

    void on_cancelAddButton_clicked();

signals:
    void newTimer();
    void stopTimer();
    void addAlarm(QString, QString);
private:
    void timerEvent(QTimerEvent *event);
    int timerID1;
    int timerID2;
    int id1=0,id2=0;
    QString thing1,thing2;
    LoginDialog *loginWindow;
    activityWidget *activityWindow;
    MapDialog *mapWindow;
    TimeTableDialog *showTimeTablePage;
    QTime computerTime;//现实时间
    QTime virtualTime;//程序的虚拟时间，10s=1h
    QTimer *pTimer;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
