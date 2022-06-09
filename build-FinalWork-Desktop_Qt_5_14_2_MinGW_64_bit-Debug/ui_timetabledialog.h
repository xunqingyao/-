/********************************************************************************
** Form generated from reading UI file 'timetabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETABLEDIALOG_H
#define UI_TIMETABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimeTableDialog
{
public:
    QPushButton *pushButton;
    QLabel *courseInfoLabel;
    QTableWidget *courseInfo;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *searchCourseButton;
    QLabel *label;
    QLineEdit *searchCourseEdit;
    QTextEdit *wayInfo;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLineEdit *startEdit;
    QLineEdit *courseOrTimeEdit;
    QLabel *label_3;
    QLabel *label_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *searchWayButton;
    QPushButton *cancelSearchButton;

    void setupUi(QDialog *TimeTableDialog)
    {
        if (TimeTableDialog->objectName().isEmpty())
            TimeTableDialog->setObjectName(QString::fromUtf8("TimeTableDialog"));
        TimeTableDialog->resize(1065, 742);
        pushButton = new QPushButton(TimeTableDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(840, 20, 93, 28));
        courseInfoLabel = new QLabel(TimeTableDialog);
        courseInfoLabel->setObjectName(QString::fromUtf8("courseInfoLabel"));
        courseInfoLabel->setGeometry(QRect(-100, 80, 912, 33));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        courseInfoLabel->setFont(font);
        courseInfoLabel->setAlignment(Qt::AlignCenter);
        courseInfo = new QTableWidget(TimeTableDialog);
        if (courseInfo->columnCount() < 7)
            courseInfo->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        courseInfo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        courseInfo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        courseInfo->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        courseInfo->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        courseInfo->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        courseInfo->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        courseInfo->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (courseInfo->rowCount() < 14)
            courseInfo->setRowCount(14);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(8, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(9, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(10, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(11, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        courseInfo->setVerticalHeaderItem(12, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        courseInfo->setVerticalHeaderItem(13, __qtablewidgetitem20);
        courseInfo->setObjectName(QString::fromUtf8("courseInfo"));
        courseInfo->setGeometry(QRect(0, 130, 781, 611));
        courseInfo->setIconSize(QSize(20, 50));
        courseInfo->setTextElideMode(Qt::ElideRight);
        courseInfo->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        courseInfo->setGridStyle(Qt::SolidLine);
        courseInfo->setRowCount(14);
        courseInfo->setColumnCount(7);
        courseInfo->horizontalHeader()->setMinimumSectionSize(35);
        courseInfo->verticalHeader()->setMinimumSectionSize(80);
        courseInfo->verticalHeader()->setHighlightSections(true);
        widget = new QWidget(TimeTableDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 20, 369, 46));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        searchCourseButton = new QPushButton(widget);
        searchCourseButton->setObjectName(QString::fromUtf8("searchCourseButton"));

        horizontalLayout->addWidget(searchCourseButton);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        searchCourseEdit = new QLineEdit(widget);
        searchCourseEdit->setObjectName(QString::fromUtf8("searchCourseEdit"));

        horizontalLayout->addWidget(searchCourseEdit);

        wayInfo = new QTextEdit(TimeTableDialog);
        wayInfo->setObjectName(QString::fromUtf8("wayInfo"));
        wayInfo->setGeometry(QRect(790, 310, 271, 431));
        widget_4 = new QWidget(TimeTableDialog);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(800, 150, 241, 136));
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        startEdit = new QLineEdit(widget_2);
        startEdit->setObjectName(QString::fromUtf8("startEdit"));

        gridLayout->addWidget(startEdit, 0, 1, 1, 1);

        courseOrTimeEdit = new QLineEdit(widget_2);
        courseOrTimeEdit->setObjectName(QString::fromUtf8("courseOrTimeEdit"));

        gridLayout->addWidget(courseOrTimeEdit, 1, 1, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        searchWayButton = new QPushButton(widget_3);
        searchWayButton->setObjectName(QString::fromUtf8("searchWayButton"));

        horizontalLayout_2->addWidget(searchWayButton);

        cancelSearchButton = new QPushButton(widget_3);
        cancelSearchButton->setObjectName(QString::fromUtf8("cancelSearchButton"));

        horizontalLayout_2->addWidget(cancelSearchButton);


        verticalLayout->addWidget(widget_3);


        retranslateUi(TimeTableDialog);

        QMetaObject::connectSlotsByName(TimeTableDialog);
    } // setupUi

    void retranslateUi(QDialog *TimeTableDialog)
    {
        TimeTableDialog->setWindowTitle(QCoreApplication::translate("TimeTableDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("TimeTableDialog", "exit", nullptr));
        courseInfoLabel->setText(QCoreApplication::translate("TimeTableDialog", "\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem = courseInfo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TimeTableDialog", "\346\230\237\346\234\237\344\270\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = courseInfo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TimeTableDialog", "\346\230\237\346\234\237\344\272\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = courseInfo->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TimeTableDialog", "\346\230\237\346\234\237\344\270\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = courseInfo->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TimeTableDialog", "\346\230\237\346\234\237\345\233\233", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = courseInfo->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TimeTableDialog", "\346\230\237\346\234\237\344\272\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = courseInfo->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("TimeTableDialog", "\346\230\237\346\234\237\345\205\255", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = courseInfo->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("TimeTableDialog", "\346\230\237\346\234\237\346\227\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = courseInfo->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("TimeTableDialog", "1\n"
"8:00-\n"
"8:45", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = courseInfo->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("TimeTableDialog", "2\n"
"8:50-\n"
"9:35", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = courseInfo->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("TimeTableDialog", "3\n"
"9:50-\n"
"10:35", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = courseInfo->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("TimeTableDialog", "4\n"
"10:40-\n"
"11:25", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = courseInfo->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("TimeTableDialog", "5\n"
"11:30-\n"
"12:15", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = courseInfo->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("TimeTableDialog", "6\n"
"13:00-\n"
"13:45", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = courseInfo->verticalHeaderItem(6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("TimeTableDialog", "7\n"
"13:50-\n"
"14:35", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = courseInfo->verticalHeaderItem(7);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("TimeTableDialog", "8\n"
"14:45-\n"
"15:30", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = courseInfo->verticalHeaderItem(8);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("TimeTableDialog", "9\n"
"15:40-\n"
"16:25", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = courseInfo->verticalHeaderItem(9);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("TimeTableDialog", "10\n"
"16:35-\n"
"17:20", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = courseInfo->verticalHeaderItem(10);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("TimeTableDialog", "11\n"
"17:25-\n"
"18:10", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = courseInfo->verticalHeaderItem(11);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("TimeTableDialog", "12\n"
"18:30-\n"
"19:15", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = courseInfo->verticalHeaderItem(12);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("TimeTableDialog", "13\n"
"19:20-\n"
"20:05", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = courseInfo->verticalHeaderItem(13);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("TimeTableDialog", "14\n"
"20:10-\n"
"20:55", nullptr));
        searchCourseButton->setText(QCoreApplication::translate("TimeTableDialog", "\346\220\234\347\264\242", nullptr));
        label->setText(QCoreApplication::translate("TimeTableDialog", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("TimeTableDialog", "\350\257\276\347\250\213/\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("TimeTableDialog", "\350\265\267\347\202\271", nullptr));
        searchWayButton->setText(QCoreApplication::translate("TimeTableDialog", "\347\241\256\345\256\232", nullptr));
        cancelSearchButton->setText(QCoreApplication::translate("TimeTableDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimeTableDialog: public Ui_TimeTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLEDIALOG_H
