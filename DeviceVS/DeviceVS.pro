# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Tools.
# ------------------------------------------------------

TEMPLATE = app
TARGET = DeviceVS
DESTDIR = ../x64/Debug
QT += widgets network
CONFIG += debug
LIBS += -L"."
DEPENDPATH += .
MOC_DIR += .
OBJECTS_DIR += debug
UI_DIR += .
RCC_DIR += .
HEADERS += ./MyLog.h \
    ./HotKeys.h \
    ./Info.h \
    ./resource.h \
    ./DeviceVS.h \
    ./GroupTwo.h \
    ./GroupThree.h
SOURCES += ./DeviceVS.cpp \
    ./MyLog.cpp \
    ./GroupThree.cpp \
    ./GroupTwo.cpp \
    ./HotKeys.cpp \
    ./Info.cpp \
    ./main.cpp
FORMS += ./DeviceVS.ui
RESOURCES += DeviceVS.qrc
