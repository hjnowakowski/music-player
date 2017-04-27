#-------------------------------------------------
#
# Project created by QtCreator 2017-03-25T18:38:44
# by Katarzyna Nowicka, Łukasz Rodak, Henryk Nowakowski
# All rigths reserved
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projekt1_rozgrzewka1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    welcome_window.cpp \
    log_window.cpp \
    sign_window.cpp \
    player_window.cpp

HEADERS  += \
    welcome_window.h \
    log_window.h \
    player_window.h \
    sign_window.h

FORMS    += \
    welcome_window.ui \
    sign_window.ui \
    log_window.ui \
    player_window.ui
