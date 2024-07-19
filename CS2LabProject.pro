QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Users.cpp \
    admin.cpp \
    adminregister.cpp \
    changedoc.cpp \
    changenurse.cpp \
    docappt.cpp \
    doccreatemedrecord.cpp \
    doccreatemedrecord2.cpp \
    doctormainwindow.cpp \
    doctorregister.cpp \
    hopitalmainpage.cpp \
    loginwindow.cpp \
    main.cpp \
    nursemainpage.cpp \
    nurseregister.cpp \
    patientmainpage.cpp \
    patientregister.cpp \
    registerwindow.cpp

HEADERS += \
    Users.h \
    admin.h \
    adminregister.h \
    changedoc.h \
    changenurse.h \
    docappt.h \
    doccreatemedrecord.h \
    doccreatemedrecord2.h \
    doctormainwindow.h \
    doctorregister.h \
    hopitalmainpage.h \
    loginwindow.h \
    nursemainpage.h \
    nurseregister.h \
    patientmainpage.h \
    patientregister.h \
    registerwindow.h

FORMS += \
    admin.ui \
    adminregister.ui \
    changedoc.ui \
    changenurse.ui \
    docappt.ui \
    doccreatemedrecord.ui \
    doccreatemedrecord2.ui \
    doctormainwindow.ui \
    doctorregister.ui \
    hopitalmainpage.ui \
    loginwindow.ui \
    nursemainpage.ui \
    nurseregister.ui \
    patientmainpage.ui \
    patientregister.ui \
    registerwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
