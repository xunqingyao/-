/********************************************************************************
** Form generated from reading UI file 'activitywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVITYWIDGET_H
#define UI_ACTIVITYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_activityWidget
{
public:
    QTextEdit *textEdit;
    QPushButton *exitButton;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *searchActivityButton;
    QLabel *label;
    QLineEdit *searchActiVityEdit;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *addActivityName;
    QLabel *label_4;
    QLineEdit *addActivityTime;
    QLabel *label_5;
    QLineEdit *startTime;
    QLabel *label_6;
    QLineEdit *endTime;
    QCheckBox *teamcheckBox;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addActivityButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelAddButton;

    void setupUi(QWidget *activityWidget)
    {
        if (activityWidget->objectName().isEmpty())
            activityWidget->setObjectName(QString::fromUtf8("activityWidget"));
        activityWidget->resize(1033, 592);
        textEdit = new QTextEdit(activityWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 180, 591, 411));
        exitButton = new QPushButton(activityWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(820, 50, 93, 28));
        label_2 = new QLabel(activityWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 80, 221, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font.setPointSize(25);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        widget = new QWidget(activityWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 366, 46));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        searchActivityButton = new QPushButton(widget);
        searchActivityButton->setObjectName(QString::fromUtf8("searchActivityButton"));

        horizontalLayout->addWidget(searchActivityButton);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        searchActiVityEdit = new QLineEdit(widget);
        searchActiVityEdit->setObjectName(QString::fromUtf8("searchActiVityEdit"));

        horizontalLayout->addWidget(searchActiVityEdit);

        widget_3 = new QWidget(activityWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(680, 100, 300, 215));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        addActivityName = new QLineEdit(widget_2);
        addActivityName->setObjectName(QString::fromUtf8("addActivityName"));

        gridLayout->addWidget(addActivityName, 0, 1, 1, 1);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        addActivityTime = new QLineEdit(widget_2);
        addActivityTime->setObjectName(QString::fromUtf8("addActivityTime"));

        gridLayout->addWidget(addActivityTime, 1, 1, 1, 1);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        startTime = new QLineEdit(widget_2);
        startTime->setObjectName(QString::fromUtf8("startTime"));

        gridLayout->addWidget(startTime, 2, 1, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        endTime = new QLineEdit(widget_2);
        endTime->setObjectName(QString::fromUtf8("endTime"));

        gridLayout->addWidget(endTime, 3, 1, 1, 1);

        teamcheckBox = new QCheckBox(widget_2);
        teamcheckBox->setObjectName(QString::fromUtf8("teamcheckBox"));

        gridLayout->addWidget(teamcheckBox, 4, 1, 1, 1);


        verticalLayout->addWidget(widget_2);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addActivityButton = new QPushButton(widget_4);
        addActivityButton->setObjectName(QString::fromUtf8("addActivityButton"));

        horizontalLayout_2->addWidget(addActivityButton);

        horizontalSpacer = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cancelAddButton = new QPushButton(widget_4);
        cancelAddButton->setObjectName(QString::fromUtf8("cancelAddButton"));

        horizontalLayout_2->addWidget(cancelAddButton);


        verticalLayout->addWidget(widget_4);


        retranslateUi(activityWidget);

        QMetaObject::connectSlotsByName(activityWidget);
    } // setupUi

    void retranslateUi(QWidget *activityWidget)
    {
        activityWidget->setWindowTitle(QCoreApplication::translate("activityWidget", "Activity", nullptr));
        exitButton->setText(QCoreApplication::translate("activityWidget", "exit", nullptr));
        label_2->setText(QCoreApplication::translate("activityWidget", "\346\264\273\345\212\250", nullptr));
        searchActivityButton->setText(QCoreApplication::translate("activityWidget", "\346\220\234\347\264\242", nullptr));
        label->setText(QCoreApplication::translate("activityWidget", "\346\264\273\345\212\250\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("activityWidget", "\346\264\273\345\212\250\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("activityWidget", "\346\227\245\346\234\237", nullptr));
        label_5->setText(QCoreApplication::translate("activityWidget", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        label_6->setText(QCoreApplication::translate("activityWidget", "\347\273\223\346\235\237\346\227\266\351\227\264", nullptr));
        teamcheckBox->setText(QCoreApplication::translate("activityWidget", "\351\233\206\344\275\223\346\264\273\345\212\250", nullptr));
        addActivityButton->setText(QCoreApplication::translate("activityWidget", "\347\241\256\345\256\232", nullptr));
        cancelAddButton->setText(QCoreApplication::translate("activityWidget", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class activityWidget: public Ui_activityWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVITYWIDGET_H
