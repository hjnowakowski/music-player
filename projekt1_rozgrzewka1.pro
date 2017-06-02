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


SOURCES += main.cpp\
    welcome_window.cpp \
    log_window.cpp \
    sign_window.cpp \
    player_window.cpp \
    dragndrop.cpp \
    drag_n_drop.cpp \
    global.cpp

HEADERS  += \
    welcome_window.h \
    log_window.h \
    player_window.h \
    sign_window.h \
    dragndrop.h \
    drag_n_drop.h \
    global.h

FORMS    += \
    welcome_window.ui \
    sign_window.ui \
    log_window.ui \
    player_window.ui \
    dragndrop.ui \
    drag_n_drop.ui
