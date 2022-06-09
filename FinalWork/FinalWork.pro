QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17 qt

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += C:/Users/86183/Desktop/sjjgWork/src \
               C:/Program File (x86)/Microsoft SDKs/Windows/V10.0A/bin/


SOURCES += \
    ../src/AfterActivity.cpp \
    ../src/Alarm.cpp \
    ../src/Cache.cpp \
    ../src/ConflictCheck.cpp \
    ../src/CourseInformation.cpp \
    ../src/CourseTime.cpp \
    ../src/MyTime.cpp \
    ../src/Request.cpp \
    ../src/Response.cpp \
    ../src/StringExtendMethod.cpp \
    ../src/UserInfo.cpp \
    ../src/map.cpp \
    activitywidget.cpp \
    logindialog.cpp \
    main.cpp \
    mainwindow.cpp \
    mapdialog.cpp \
    registerdialog.cpp \
    showcourseinfo.cpp \
    timetabledialog.cpp

HEADERS += \
    ../src/AfterActivity.h \
    ../src/Alarm.h \
    ../src/Cache.h \
    ../src/ConflictCheck.h \
    ../src/CourseInformation.h \
    ../src/CourseTime.h \
    ../src/MyTime.h \
    ../src/Request.h \
    ../src/Response.h \
    ../src/StringExtendMethod.h \
    ../src/UserInfo.h \
    ../src/allEnum.h \
    ../src/map.h \
    activitywidget.h \
    logindialog.h \
    mainwindow.h \
    mapdialog.h \
    registerdialog.h \
    showcourseinfo.h \
    timetabledialog.h

FORMS += \
    activitywidget.ui \
    logindialog.ui \
    mainwindow.ui \
    mapdialog.ui \
    registerdialog.ui \
    showcourseinfo.ui \
    timetabledialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../src/README

RESOURCES += \
    ../mapPicture/images.qrc
