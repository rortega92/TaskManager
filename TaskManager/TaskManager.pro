#-------------------------------------------------
#
# Project created by QtCreator 2014-02-15T16:23:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TaskManager
TEMPLATE = app


SOURCES += main.cpp\
        processmanagerwindow.cpp \
    process.cpp \
    exec.cpp \
    passdialog.cpp

HEADERS  += processmanagerwindow.h \
    process.h \
    exec.h \
    passdialog.h

FORMS    += processmanagerwindow.ui \
    passdialog.ui
