TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    soda.cpp \
    vendingmachine.cpp \
    ownersname.cpp

HEADERS += \
    soda.h \
    vendingmachine.h \
    ownersname.h
