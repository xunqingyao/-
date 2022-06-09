#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include<QMessageBox>
#include<QKeyEvent>
#include<QString>
#include"registerdialog.h"
#include"allEnum.h"
#include"UserInfo.h"
#include"Response.h"
#include"Request.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();
    void keyPressEvent(QKeyEvent *event);
    void registerComplete();//展示登录窗口，完成注册
    void registerExit();//展示登录窗口，退出注册
signals:
    void successfulLogin(string time);//展示main窗口
private slots:
    void on_loginButton_released();   
    void on_exitButton_clicked();
    void on_registerButton_clicked();

private:
    registerDialog registerWindow;
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
