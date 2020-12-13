QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT +=  network widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
#    bill.cpp \
    bill.cpp \
    chatdialog.cpp \
    client.cpp \
    connection.cpp \
    dashboard.cpp \
    main.cpp \
    mainwindow.cpp \
    medicalform.cpp \
    peermanager.cpp \
    retrieve.cpp \
    server.cpp \
    signup.cpp \
    symptom.cpp \
    update.cpp

HEADERS += \
#    bill.h \
    bill.h \
    chatdialog.h \
    client.h \
    connection.h \
    dashboard.h \
    mainwindow.h \
    medicalform.h \
    peermanager.h \
    retrieve.h \
    server.h \
    signup.h \
    symptom.h \
    update.h

FORMS += \
#    bill.ui \
    bill.ui \
    chatdialog.ui \
    dashboard.ui \
    mainwindow.ui \
    medicalform.ui \
    retrieve.ui \
    signup.ui \
    symptom.ui \
    update.ui

requires(qtConfig(udpsocket))
requires(qtConfig(listwidget))

# Default rules for deployment.
target.path = $$[QT_INSTALL_EXAMPLES]/network/network-chat
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

