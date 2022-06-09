/********************************************************************************
** Form generated from reading UI file 'mapdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPDIALOG_H
#define UI_MAPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapDialog
{
public:
    QTextEdit *textEdit;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *startPlaceEdit;
    QLabel *label_2;
    QLineEdit *destinationEdit;
    QCheckBox *BenToShacheckBox;
    QCheckBox *ShaToBencheckBox;
    QCheckBox *BencheckBox;
    QCheckBox *ShacheckBox;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *busCheckBox;
    QCheckBox *schoolBusCheckBox;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *MinTimecheckBox;
    QCheckBox *MinDischeckBox;
    QCheckBox *BikecheckBox;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *searchTheWayButton;
    QPushButton *cancelSearchButton;
    QPushButton *exitButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *transportSchedule;

    void setupUi(QDialog *MapDialog)
    {
        if (MapDialog->objectName().isEmpty())
            MapDialog->setObjectName(QString::fromUtf8("MapDialog"));
        MapDialog->resize(1036, 714);
        textEdit = new QTextEdit(MapDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 300, 211, 411));
        widget_2 = new QWidget(MapDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 327, 272));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        startPlaceEdit = new QLineEdit(widget);
        startPlaceEdit->setObjectName(QString::fromUtf8("startPlaceEdit"));

        gridLayout->addWidget(startPlaceEdit, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        destinationEdit = new QLineEdit(widget);
        destinationEdit->setObjectName(QString::fromUtf8("destinationEdit"));

        gridLayout->addWidget(destinationEdit, 1, 1, 1, 1);

        BenToShacheckBox = new QCheckBox(widget);
        BenToShacheckBox->setObjectName(QString::fromUtf8("BenToShacheckBox"));

        gridLayout->addWidget(BenToShacheckBox, 2, 0, 1, 1);

        ShaToBencheckBox = new QCheckBox(widget);
        ShaToBencheckBox->setObjectName(QString::fromUtf8("ShaToBencheckBox"));

        gridLayout->addWidget(ShaToBencheckBox, 2, 1, 1, 1);

        BencheckBox = new QCheckBox(widget);
        BencheckBox->setObjectName(QString::fromUtf8("BencheckBox"));

        gridLayout->addWidget(BencheckBox, 3, 0, 1, 1);

        ShacheckBox = new QCheckBox(widget);
        ShacheckBox->setObjectName(QString::fromUtf8("ShacheckBox"));

        gridLayout->addWidget(ShacheckBox, 3, 1, 1, 1);


        verticalLayout->addWidget(widget);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        busCheckBox = new QCheckBox(widget_5);
        busCheckBox->setObjectName(QString::fromUtf8("busCheckBox"));

        horizontalLayout_3->addWidget(busCheckBox);

        schoolBusCheckBox = new QCheckBox(widget_5);
        schoolBusCheckBox->setObjectName(QString::fromUtf8("schoolBusCheckBox"));

        horizontalLayout_3->addWidget(schoolBusCheckBox);


        verticalLayout->addWidget(widget_5);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        MinTimecheckBox = new QCheckBox(widget_4);
        MinTimecheckBox->setObjectName(QString::fromUtf8("MinTimecheckBox"));

        horizontalLayout_2->addWidget(MinTimecheckBox);

        MinDischeckBox = new QCheckBox(widget_4);
        MinDischeckBox->setObjectName(QString::fromUtf8("MinDischeckBox"));

        horizontalLayout_2->addWidget(MinDischeckBox);

        BikecheckBox = new QCheckBox(widget_4);
        BikecheckBox->setObjectName(QString::fromUtf8("BikecheckBox"));

        horizontalLayout_2->addWidget(BikecheckBox);


        verticalLayout->addWidget(widget_4);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        searchTheWayButton = new QPushButton(widget_3);
        searchTheWayButton->setObjectName(QString::fromUtf8("searchTheWayButton"));

        horizontalLayout->addWidget(searchTheWayButton);

        cancelSearchButton = new QPushButton(widget_3);
        cancelSearchButton->setObjectName(QString::fromUtf8("cancelSearchButton"));

        horizontalLayout->addWidget(cancelSearchButton);

        exitButton = new QPushButton(widget_3);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addWidget(widget_3);

        label_3 = new QLabel(MapDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 10, 601, 341));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/pic1/campusBenbu.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(MapDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 360, 601, 341));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/pic1/campusShahe.jpg")));
        label_4->setScaledContents(true);
        transportSchedule = new QLabel(MapDialog);
        transportSchedule->setObjectName(QString::fromUtf8("transportSchedule"));
        transportSchedule->setGeometry(QRect(210, 300, 211, 411));

        retranslateUi(MapDialog);

        QMetaObject::connectSlotsByName(MapDialog);
    } // setupUi

    void retranslateUi(QDialog *MapDialog)
    {
        MapDialog->setWindowTitle(QCoreApplication::translate("MapDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MapDialog", "\350\265\267\347\202\271:", nullptr));
        label_2->setText(QCoreApplication::translate("MapDialog", "\347\273\210\347\202\271\357\274\232", nullptr));
        BenToShacheckBox->setText(QCoreApplication::translate("MapDialog", "\346\234\254\351\203\250\345\210\260\346\262\231\346\262\263", nullptr));
        ShaToBencheckBox->setText(QCoreApplication::translate("MapDialog", "\346\262\231\346\262\263\345\210\260\346\234\254\351\203\250", nullptr));
        BencheckBox->setText(QCoreApplication::translate("MapDialog", "\346\234\254\351\203\250\346\240\241\345\206\205", nullptr));
        ShacheckBox->setText(QCoreApplication::translate("MapDialog", "\346\262\231\346\262\263\346\240\241\345\206\205", nullptr));
        busCheckBox->setText(QCoreApplication::translate("MapDialog", "\345\205\254\345\205\261\346\261\275\350\275\246", nullptr));
        schoolBusCheckBox->setText(QCoreApplication::translate("MapDialog", "\345\255\246\346\240\241\347\217\255\350\275\246", nullptr));
        MinTimecheckBox->setText(QCoreApplication::translate("MapDialog", "\346\234\200\347\237\255\346\227\266\351\227\264", nullptr));
        MinDischeckBox->setText(QCoreApplication::translate("MapDialog", "\346\234\200\347\237\255\350\267\235\347\246\273", nullptr));
        BikecheckBox->setText(QCoreApplication::translate("MapDialog", "\351\252\221\350\207\252\350\241\214\350\275\246", nullptr));
        searchTheWayButton->setText(QCoreApplication::translate("MapDialog", "\347\241\256\345\256\232", nullptr));
        cancelSearchButton->setText(QCoreApplication::translate("MapDialog", "\345\217\226\346\266\210", nullptr));
        exitButton->setText(QCoreApplication::translate("MapDialog", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        transportSchedule->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MapDialog: public Ui_MapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPDIALOG_H
