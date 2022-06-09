/********************************************************************************
** Form generated from reading UI file 'showcourseinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCOURSEINFO_H
#define UI_SHOWCOURSEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_showCourseInfo
{
public:
    QTextEdit *CourseInfoEdit;
    QTextEdit *homeworkEdit;
    QTextEdit *materialEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *exitButton;
    QPushButton *homeworkButton;
    QPushButton *materialButton;

    void setupUi(QDialog *showCourseInfo)
    {
        if (showCourseInfo->objectName().isEmpty())
            showCourseInfo->setObjectName(QString::fromUtf8("showCourseInfo"));
        showCourseInfo->resize(999, 600);
        CourseInfoEdit = new QTextEdit(showCourseInfo);
        CourseInfoEdit->setObjectName(QString::fromUtf8("CourseInfoEdit"));
        CourseInfoEdit->setGeometry(QRect(0, 130, 333, 471));
        homeworkEdit = new QTextEdit(showCourseInfo);
        homeworkEdit->setObjectName(QString::fromUtf8("homeworkEdit"));
        homeworkEdit->setGeometry(QRect(330, 130, 341, 471));
        materialEdit = new QTextEdit(showCourseInfo);
        materialEdit->setObjectName(QString::fromUtf8("materialEdit"));
        materialEdit->setGeometry(QRect(670, 130, 333, 471));
        label = new QLabel(showCourseInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 221, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font.setPointSize(25);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(showCourseInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 50, 221, 71));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(showCourseInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(750, 60, 211, 61));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        exitButton = new QPushButton(showCourseInfo);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(880, 10, 93, 28));
        homeworkButton = new QPushButton(showCourseInfo);
        homeworkButton->setObjectName(QString::fromUtf8("homeworkButton"));
        homeworkButton->setGeometry(QRect(530, 10, 93, 28));
        materialButton = new QPushButton(showCourseInfo);
        materialButton->setObjectName(QString::fromUtf8("materialButton"));
        materialButton->setGeometry(QRect(690, 10, 93, 28));

        retranslateUi(showCourseInfo);

        QMetaObject::connectSlotsByName(showCourseInfo);
    } // setupUi

    void retranslateUi(QDialog *showCourseInfo)
    {
        showCourseInfo->setWindowTitle(QCoreApplication::translate("showCourseInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("showCourseInfo", "\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("showCourseInfo", "\344\275\234\344\270\232", nullptr));
        label_3->setText(QCoreApplication::translate("showCourseInfo", "\350\257\276\347\250\213\350\265\204\346\226\231", nullptr));
        exitButton->setText(QCoreApplication::translate("showCourseInfo", "exit", nullptr));
        homeworkButton->setText(QCoreApplication::translate("showCourseInfo", "\344\270\212\344\274\240\344\275\234\344\270\232", nullptr));
        materialButton->setText(QCoreApplication::translate("showCourseInfo", "\344\270\212\344\274\240\350\265\204\346\226\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showCourseInfo: public Ui_showCourseInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCOURSEINFO_H
