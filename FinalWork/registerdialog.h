#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>
#include<QMessageBox>
#include<QString>
#include<string>
#include"UserInfo.h"
#include"allEnum.h"
namespace Ui {
class registerDialog;
}

class registerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit registerDialog(QWidget *parent = nullptr);
    ~registerDialog();
    
private slots:
    void on_reg_Register_released();

    void on_reg_Cancel_released();
signals:
    void successfulRegister();  //注册完成，展示登录窗口
    void exitRegister();//退出注册窗口
private:
    Ui::registerDialog *ui;
};

#endif // REGISTERDIALOG_H
