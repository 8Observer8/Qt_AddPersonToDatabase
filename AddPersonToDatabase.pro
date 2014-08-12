#-------------------------------------------------
#
# Project created by QtCreator 2014-08-11T09:33:32
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AddPersonToDatabase
TEMPLATE = app


SOURCES += main.cpp\
        Dialog.cpp

HEADERS  += Dialog.h \
    Person.h \
    Database.h \
    FileError.h \
    FileDoesntExist.h \
    FileOpenError.h \
    EmptyArgumentError.h \
    LogicError.h \
    IncorrectQueryError.h

FORMS    += Dialog.ui
