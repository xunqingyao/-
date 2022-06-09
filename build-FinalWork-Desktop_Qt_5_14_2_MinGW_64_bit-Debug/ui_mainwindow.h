/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *timeTableButton;
    QPushButton *mapButton;
    QPushButton *activityButton;
    QPushButton *exitButton;
    QLCDNumber *digitalClock;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_7;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *timeEdit;
    QLabel *label_2;
    QLineEdit *thingEdit;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancelAddButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(962, 846);
        MainWindow->setWindowOpacity(1.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(16777215, 800));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(1000, 2000));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        timeTableButton = new QPushButton(widget_3);
        timeTableButton->setObjectName(QString::fromUtf8("timeTableButton"));
        timeTableButton->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(timeTableButton);

        mapButton = new QPushButton(widget_3);
        mapButton->setObjectName(QString::fromUtf8("mapButton"));
        mapButton->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(mapButton);

        activityButton = new QPushButton(widget_3);
        activityButton->setObjectName(QString::fromUtf8("activityButton"));
        activityButton->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(activityButton);

        exitButton = new QPushButton(widget_3);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(exitButton);


        verticalLayout_3->addWidget(widget_3);

        digitalClock = new QLCDNumber(widget_2);
        digitalClock->setObjectName(QString::fromUtf8("digitalClock"));
        digitalClock->setMinimumSize(QSize(300, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(5);
        font.setBold(false);
        font.setWeight(50);
        digitalClock->setFont(font);
        digitalClock->setFrameShape(QFrame::NoFrame);
        digitalClock->setFrameShadow(QFrame::Sunken);
        digitalClock->setLineWidth(9);
        digitalClock->setMidLineWidth(7);
        digitalClock->setSmallDecimalPoint(true);
        digitalClock->setDigitCount(6);
        digitalClock->setMode(QLCDNumber::Oct);
        digitalClock->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_3->addWidget(digitalClock);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(widget);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(297, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        verticalLayout_4 = new QVBoxLayout(widget_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_7 = new QWidget(widget_5);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        gridLayout = new QGridLayout(widget_7);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget_7);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        timeEdit = new QLineEdit(widget_7);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        gridLayout->addWidget(timeEdit, 0, 1, 1, 1);

        label_2 = new QLabel(widget_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        thingEdit = new QLineEdit(widget_7);
        thingEdit->setObjectName(QString::fromUtf8("thingEdit"));

        gridLayout->addWidget(thingEdit, 1, 1, 1, 1);


        verticalLayout_4->addWidget(widget_7);

        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_2 = new QHBoxLayout(widget_6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addButton = new QPushButton(widget_6);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout_2->addWidget(addButton);

        horizontalSpacer_3 = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        cancelAddButton = new QPushButton(widget_6);
        cancelAddButton->setObjectName(QString::fromUtf8("cancelAddButton"));

        horizontalLayout_2->addWidget(cancelAddButton);


        verticalLayout_4->addWidget(widget_6);


        horizontalLayout_3->addWidget(widget_5);

        horizontalSpacer_2 = new QSpacerItem(297, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 962, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\350\241\250", nullptr));
        timeTableButton->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213", nullptr));
        mapButton->setText(QCoreApplication::translate("MainWindow", "\345\234\260\345\233\276", nullptr));
        activityButton->setText(QCoreApplication::translate("MainWindow", "\346\264\273\345\212\250", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\272\213\344\273\266\357\274\232", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        cancelAddButton->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
