TARGET = arduino-usb

TEMPLATE = app

CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

include( teensy.pri )

HEADERS += \
    hal.h \
    usb.h \
    print.h

SOURCES += \
    main.cpp \
    hal.cpp \
    usb.c \
    print.c

OTHER_FILES += \
    blinky/blinky.c \
    blinky/print.c \
    blinky/usb_debug_only.c \
    blinky/print.h \
    blinky/usb_debug_only.h

