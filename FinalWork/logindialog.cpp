#include "logindialog.h"
#include "ui_logindialog.h"


LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    registerWindow.setWindowTitle("注册");

    void(registerDialog::*showLoginDialogAfterRegister)()=&registerDialog::successfulRegister;
    connect(&registerWindow,showLoginDialogAfterRegister,this,&LoginDialog::registerComplete);//注册完成，打开登录窗口，关闭注册窗口
    void(registerDialog::*showLoginDialogAfterExit)()=&registerDialog::exitRegister;
    connect(&registerWindow,showLoginDialogAfterExit,this,&LoginDialog::registerExit);//退出注册，关闭注册窗口，回到登录窗口
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::registerComplete()
{
    show();

}
void LoginDialog::registerExit()
{
    show();
}


//槽函数
void LoginDialog::on_loginButton_released()//点击确定，判断用户名密码
{
    QString Qusername=ui->usersNameEdit->text();//用户名
    QString Qpassword=ui->passwordEdit->text();//密码
    string username = Qusername.toStdString();
    string password = Qpassword.toStdString();
    int loginJudge = UserInfo::isLogin(username,password);


    if( (ui->usersNameEdit->text()=="")||(ui->passwordEdit->text()==""))
    {
        QMessageBox::warning(this,tr("提示"),tr("用户名或密码不能为空"),QMessageBox::Yes );
    }
    else if(loginJudge)
    {
        string time;
        this->hide();
        theLoginUser->setUsername(username);
        theLoginUser->setPassword(password);
        theCache->setUser(*theLoginUser);
        time = Request::init(*theLoginUser, theCache);
        //日志
        QString textLog = QString::fromStdString(username) + "登陆成功\n";
        Request::log(textLog.toStdString());

        emit successfulLogin(time);//发信号，隐藏登陆窗口打开mainwindow
    }
    else
    {
        QMessageBox::warning(this,tr("提示"),tr("用户名或密码错误"),QMessageBox::Yes );
        ui->usersNameEdit->clear();
        ui->passwordEdit->clear();
        ui->usersNameEdit->setFocus();
    }

}

void LoginDialog::on_exitButton_clicked()
{
    this->close();
}

void LoginDialog::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Enter||event->key()==Qt::Key_Return)
    {
        emit ui->loginButton->click();
    }
}

void LoginDialog::on_registerButton_clicked()//打开注册界面，隐藏登录界面
{
    this->hide();
    registerWindow.show();
}
