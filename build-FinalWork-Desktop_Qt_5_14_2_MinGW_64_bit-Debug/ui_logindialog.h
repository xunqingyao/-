/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *loginLabel;
    QWidget *widget_6;
    QGridLayout *gridLayout_2;
    QLabel *usersNameLabel;
    QLineEdit *usersNameEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *exitButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *registerButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(900, 628);
        verticalLayout_3 = new QVBoxLayout(LoginDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 209, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        widget_4 = new QWidget(LoginDialog);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(302, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        loginLabel = new QLabel(widget_5);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(loginLabel);

        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout_2 = new QGridLayout(widget_6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        usersNameLabel = new QLabel(widget_6);
        usersNameLabel->setObjectName(QString::fromUtf8("usersNameLabel"));

        gridLayout_2->addWidget(usersNameLabel, 0, 0, 1, 1);

        usersNameEdit = new QLineEdit(widget_6);
        usersNameEdit->setObjectName(QString::fromUtf8("usersNameEdit"));

        gridLayout_2->addWidget(usersNameEdit, 0, 1, 1, 1);

        passwordLabel = new QLabel(widget_6);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        gridLayout_2->addWidget(passwordLabel, 1, 0, 1, 1);

        passwordEdit = new QLineEdit(widget_6);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(passwordEdit, 1, 1, 1, 1);


        verticalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(widget_5);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_4 = new QHBoxLayout(widget_7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        loginButton = new QPushButton(widget_7);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        horizontalLayout_4->addWidget(loginButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        exitButton = new QPushButton(widget_7);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        horizontalLayout_4->addWidget(exitButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        registerButton = new QPushButton(widget_7);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        horizontalLayout_4->addWidget(registerButton);


        verticalLayout_2->addWidget(widget_7);


        horizontalLayout_3->addWidget(widget_5);

        horizontalSpacer_6 = new QSpacerItem(302, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_3->addWidget(widget_4);

        verticalSpacer = new QSpacerItem(20, 208, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        loginLabel->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        usersNameLabel->setText(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        passwordLabel->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201 \357\274\232", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginDialog", "\347\241\256\345\256\232", nullptr));
        exitButton->setText(QCoreApplication::translate("LoginDialog", "\345\217\226\346\266\210", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
