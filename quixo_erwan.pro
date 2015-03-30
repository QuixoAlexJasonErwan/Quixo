#-------------------------------------------------
#
# Project created by QtCreator 2015-03-16T12:02:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = quixo_erwan
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    piece.cpp \
    plateau.cpp

HEADERS  += mainwindow.h \
    piece.h \
    plateau.h

FORMS    += mainwindow.ui

RESOURCES += \
    mes_images.qrc
