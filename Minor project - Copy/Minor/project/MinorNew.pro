QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dashboard.cpp \
    dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    medicalform.cpp \
    retrieve.cpp \
    signup.cpp \
    symptom.cpp \
    update.cpp

HEADERS += \
    dashboard.h \
    dialog.h \
    mainwindow.h \
    medicalform.h \
    retrieve.h \
    signup.h \
    symptom.h \
    update.h

FORMS += \
    dashboard.ui \
    dialog.ui \
    mainwindow.ui \
    medicalform.ui \
    retrieve.ui \
    signup.ui \
    symptom.ui \
    update.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

