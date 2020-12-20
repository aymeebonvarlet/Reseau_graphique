QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    binary.cpp \
    connecteur.cpp \
    fils.cpp \
    main.cpp \
    myscene.cpp \
    parameters.cpp \
    qstd.cpp \
    reseau.cpp \
    screen_range.cpp \
    widgets.cpp

HEADERS += \
    binary.h \
    connecteur.h \
    fils.h \
    myscene.h \
    parameters.h \
    qstd.h \
    reseau.h \
    screen_range.h \
    widgets.h

FORMS += \
    widgets.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
