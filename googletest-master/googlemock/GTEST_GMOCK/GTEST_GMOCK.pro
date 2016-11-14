#-------------------------------------------------
#
# Project created by QtCreator 2016-06-27T14:51:46
#
#-------------------------------------------------

QT       -= gui

TARGET = GTEST_GMOCK
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    ../src/gmock-all.cc \
    ../src/gmock_main.cc

HEADERS +=
unix {
    target.path = /usr/lib
    INSTALLS += target
}
