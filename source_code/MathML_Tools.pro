#-------------------------------------------------
#
# Project created by QtCreator 2023-05-15T10:36:11
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MathML_Tools
TEMPLATE = app


SOURCES += main.cpp\
        tools_widget.cpp \
    qtmmlwidget.cpp

HEADERS  += tools_widget.h \
    qtmmlwidget.h

FORMS    += tools_widget.ui

RESOURCES += \
    xml_file.qrc
