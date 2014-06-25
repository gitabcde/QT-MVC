#-------------------------------------------------
#
# Project created by QtCreator 2014-06-24T18:40:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mvctest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ccimagedelegate.cpp \
    ccimageviewlist.cpp

HEADERS  += mainwindow.h \
    ccimagedelegate.h \
    ccimageviewlist.h

FORMS    += mainwindow.ui
