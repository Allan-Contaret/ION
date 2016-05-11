QT += core
QT -= gui

CONFIG += c++11

TARGET = QT
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    cpu.cpp \
    mainwindow.cpp \
    mem.cpp

HEADERS += \
    cpu.h \
    mainwindow.h \
    mem.h
