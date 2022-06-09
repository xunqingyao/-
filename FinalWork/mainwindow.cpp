#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    theLoginUser = new UserInfo();
    theCache = new Cache();

    this->virtualTime = this->virtualTime.fromMSecsSinceStartOfDay(0);
    //qDebug()<<this->virtualTime.toString();
    QTimer *pTimer = new QTimer(this);
    connect(pTimer,&QTimer::timeout,this,&MainWindow::updateTime);
    pTimer->start(166);



    loginWindow = new LoginDialog();
    loginWindow->setWindowTitle("登录");
    loginWindow->show();

    connect(loginWindow,SIGNAL(successfulLogin(string)),this,SLOT(successfulLogin(string)));

    activityWindow = new activityWidget();
    mapWindow = new MapDialog();
    showTimeTablePage = new TimeTableDialog();

    connect(activityWindow,&activityWidget::backToMain,this,&MainWindow::openMainWindow);
    connect(showTimeTablePage,&TimeTableDialog::backToMain,this,&MainWindow::openMainWindow);
    connect(mapWindow, &MapDialog::backToMain, this, &MainWindow::openMainWindow);
    //关闭倒计时
    connect(this, &MainWindow::stopTimer, [=]()
    {
        pTimer->stop();
    });
    //继续倒计时
    connect(this,&MainWindow::newTimer, [=]()
    {
        pTimer->setInterval(166);
        pTimer->start(166);
    });
    //new一个闹钟
    connect(this,SIGNAL(addAlarm(QString, QString)),this,SLOT(newAlarmAndAdd(QString,QString)));
}

MainWindow::~MainWindow()
{
    saveTime();
    delete ui;
}

void MainWindow::openMainWindow()//打开主窗口
{
    show();
    emit newTimer();
}
void MainWindow::saveTime()
{
    string time = this->virtualTime.toString("hh:mm").toStdString();
    string localpath = "..\\userinfo\\"+ theLoginUser->getUsername() +"\\log\\time.txt";
    fstream f;
    f.open(localpath,ios::out);
    f << time;
    f.close();
}
void MainWindow::successfulLogin(string time)
{
    show();
    this->virtualTime = QTime::fromString(QString::fromStdString(time),"hh:mm");
}
//
void MainWindow::timerEvent(QTimerEvent *event)
{
    int tmp = event->timerId();
    if(tmp == timerID1)
    {
        id1 = 0;
        QMessageBox::information(this,"提示",thing1 + "到点啦",QMessageBox::Ok);
        killTimer(timerID1);
    }
    else if(tmp == timerID2)
    {
        id2 = 0;
        QMessageBox::information(this,"提示",thing2 + "到点啦",QMessageBox::Ok);
        killTimer(timerID2);
    }
}
void MainWindow::newAlarmAndAdd(QString thing,QString time)
{
    //QTimer *alarm = new QTimer();
    //waitTime = current.secsTo(this->virtualTime);
    //alarm->start(waitTime/360);

    int waitTime;
    QTime current = QTime::fromString(time,"hh:mm");
    waitTime = this->virtualTime.secsTo(current);
    waitTime = waitTime*1000/360;


    if(id1 == 0)
    {
        timerID1 = startTimer(waitTime);
        id1 = 1;
        thing1 = thing;
    }
    else if(id2 == 0)
    {
        timerID2 = startTimer(waitTime);
        id2 = 1;
        thing2 = thing;
    }
    else
    {
        QMessageBox::warning(this, "WARNING", "No More Place",QMessageBox::Ok);
    }
}
void MainWindow::updateTime()
{

   this->virtualTime=this->virtualTime.addSecs(60);
   QString timeText= this->virtualTime.toString("hh:mm");
   ui->digitalClock->display(timeText);
}
void MainWindow::on_activityButton_released()
{
    emit stopTimer();
    this->hide();
    this->activityWindow->show();
}

void MainWindow::on_mapButton_clicked()//打开地图窗口
{
    emit stopTimer();
    this->hide();
    this->mapWindow->show();
}


void MainWindow::on_exitButton_clicked()
{
    emit stopTimer();
    saveTime();
    close();
    this->loginWindow->show();
}

void MainWindow::on_timeTableButton_clicked()
{
    emit stopTimer();
    this->hide();
    this->showTimeTablePage->show();
    showTimeTablePage->showTimetable();
}

void MainWindow::on_addButton_clicked()
{
    QString thing,time;
    thing = ui->thingEdit->text();
    time = ui->timeEdit->text();
    emit addAlarm(thing, time);
    ui->timeEdit->clear();
    ui->thingEdit->clear();
}

void MainWindow::on_cancelAddButton_clicked()
{
    ui->timeEdit->clear();
    ui->thingEdit->clear();
}
