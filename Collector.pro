QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    backend.cpp \
    biomesscollect.cpp \
    bioupdate.cpp \
    checkstatus.cpp \
    main.cpp \
    mainwindow.cpp \
    messagepending.cpp \
    nonbioupdate.cpp \
    nonmesscollect.cpp \
    recymesscollect.cpp \
    recyupdate.cpp \
    update.cpp

HEADERS += \
    backend.h \
    biomesscollect.h \
    bioupdate.h \
    checkstatus.h \
    mainwindow.h \
    messagepending.h \
    nonbioupdate.h \
    nonmesscollect.h \
    recymesscollect.h \
    recyupdate.h \
    update.h

FORMS += \
    biomesscollect.ui \
    bioupdate.ui \
    checkstatus.ui \
    mainwindow.ui \
    messagepending.ui \
    nonbioupdate.ui \
    nonmesscollect.ui \
    recymesscollect.ui \
    recyupdate.ui \
    update.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
