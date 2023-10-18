QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Player.cpp \
    acheivement.cpp \
    add_admin.cpp \
    admin.cpp \
    admin_refund.cpp \
    leaderboard.cpp \
    main.cpp \
    mainwindow.cpp \
    manage_player.cpp \
    menu.cpp \
    notify.cpp \
    premium_user.cpp \
    rank.cpp \
    refund.cpp \
    reload.cpp \
    score.cpp

HEADERS += \
    Player.h \
    acheivement.h \
    add_admin.h \
    admin.h \
    admin_refund.h \
    leaderboard.h \
    mainwindow.h \
    manage_player.h \
    menu.h \
    notify.h \
    premium_user.h \
    rank.h \
    refund.h \
    reload.h \
    score.h

FORMS += \
    Player.ui \
    add_admin.ui \
    admin.ui \
    admin_refund.ui \
    leaderboard.ui \
    mainwindow.ui \
    manage_player.ui \
    menu.ui \
    notify.ui \
    premium_user.ui \
    reload.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    RESOURCES.qrc
