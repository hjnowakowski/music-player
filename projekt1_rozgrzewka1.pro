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
QT       += widgets
QT       += testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projekt1_rozgrzewka1
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS




SOURCES += src/main.cpp\
    src/welcome_window.cpp \
    src/log_window.cpp \
    src/sign_window.cpp \
    src/player_window.cpp \
    src/global.cpp

HEADERS  += \
    headers/welcome_window.h \
    headers/log_window.h \
    headers/player_window.h \
    headers/sign_window.h \
    headers/global.h

FORMS    += \
    forms/welcome_window.ui \
    forms/sign_window.ui \
    forms/log_window.ui \
    forms/player_window.ui
