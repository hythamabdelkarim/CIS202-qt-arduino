//
// File: main.cpp
// Description: This program will make a ball animation bounce in a random direction inside the widget rectangle.
// Created: Tuesday. May 29, 2018, 4:00 pm
// Author: Hytham Abdelkarim
// mail: abdelkarimh@student.vvc.edu
//

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
