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

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

#CONFIG += staticlib
#INCLUDEPATH += 3rdparty/taglib/1.11.1/include

# link to the lib:
#LIBS += -L"/Users/henryknowakowski/projekt/projekt1/3rdparty/taglib/1.11.1/lib" -l /Users/henryknowakowski/projekt/projekt1/3rdparty/taglib/1.11.1/li/libtag.1.17.0.dylib


#LIBS += -llibtag.1.17.0
#LIBS += -l"/Users/henryknowakowski/projekt/projekt1/3rdparty/taglib/1.11.1/lib/libtag.1.17.0.dylib"

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += src/main.cpp\
    src/welcome_window.cpp \
    src/log_window.cpp \
    src/sign_window.cpp \
    src/player_window.cpp \
    src/dragndrop.cpp \
    src/drag_n_drop.cpp \
    src/global.cpp

HEADERS  += \
    headers/welcome_window.h \
    headers/log_window.h \
    headers/player_window.h \
    headers/sign_window.h \
    headers/dragndrop.h \
    headers/drag_n_drop.h \
    headers/global.h

FORMS    += \
    forms/welcome_window.ui \
    forms/sign_window.ui \
    forms/log_window.ui \
    forms/player_window.ui \
    forms/dragndrop.ui \
    forms/drag_n_drop.ui
