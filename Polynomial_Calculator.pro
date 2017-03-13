#-------------------------------------------------
#
# Project created by QtCreator 2017-02-24T11:30:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Polynomial_Calculator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Monomial.cpp \
    Polynomial.cpp \
    To_String.cpp

HEADERS  += mainwindow.h \
    Monomial.h \
    Polynomial.h \
    To_String.h

FORMS    += mainwindow.ui
