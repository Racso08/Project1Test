#-------------------------------------------------
#
# Project created by QtCreator 2018-03-29T23:27:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Test6
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        logger.cpp \
    start.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../usr/local/lib/release/ -llog4cpp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../usr/local/lib/debug/ -llog4cpp
else:unix: LIBS += -L$$PWD/../../../../usr/local/lib/ -llog4cpp

INCLUDEPATH += $$PWD/../../../../usr/local/include/log4cpp
DEPENDPATH += $$PWD/../../../../usr/local/include/log4cpp

HEADERS += \
        logger.h \
    start.h

FORMS += \
        logger.ui
