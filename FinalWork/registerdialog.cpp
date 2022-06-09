#include "registerdialog.h"
#include "ui_registerdialog.h"

registerDialog::registerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerDialog)
{
    ui->setupUi(this);

}

registerDialog::~registerDialog()
{
    delete ui;
}

void registerDialog::on_reg_Register_released()
{
    QString Qusername=ui->reg_usersnameEdit->text();
    QString Qpassword=ui->reg_passwordEdit->text();
    QString QpasswordConfirm=ui->reg_passwordConfirmEdit->text();
    string username=Qusername.toStdString();//用户名
    string password= Qpassword.toStdString();//密码
    string passwordConfirm=QpasswordConfirm.toStdString();//确认密码
    if(password!=passwordConfirm)
    {

        QMessageBox::warning(this,tr("提示"),tr("两次输入密码不一致"),QMessageBox::Ok);
        ui->reg_passwordEdit->clear();
        ui->reg_usersnameEdit->clear();
        ui->reg_passwordConfirmEdit->clear();
    }
    else if(UserInfo::signUp(username,password)==SignUpRes::SUCCESS)
    {
        this->close();
        ui->reg_passwordEdit->clear();
        ui->reg_usersnameEdit->clear();
        ui->reg_passwordConfirmEdit->clear();
        QMessageBox::information(this,tr(""),tr("注册成功"),QMessageBox::Ok);
        emit successfulRegister();
    }
    else if(UserInfo::signUp(username,password)==SignUpRes::HASUSERNAME)
    {
        QMessageBox::warning(this,tr("注意"),tr("已存在此用户名"),QMessageBox::Ok);
        ui->reg_passwordEdit->clear();
        ui->reg_usersnameEdit->clear();
        ui->reg_passwordConfirmEdit->clear();
    }
    else if(UserInfo::signUp(username,password)==SignUpRes::HASSPECIALSIGNAL)\
    {
        QMessageBox::warning(this,tr("注意"),tr("存在不合法字符"),QMessageBox::Ok);
        ui->reg_passwordEdit->clear();
        ui->reg_usersnameEdit->clear();
        ui->reg_passwordConfirmEdit->clear();
    }
}

void registerDialog::on_reg_Cancel_released()//关掉注册窗口
{
    this->close();
    emit exitRegister();
}
