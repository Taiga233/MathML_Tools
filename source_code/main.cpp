/**********************************************
*  File:   main.cpp
*  Author: Taiga233
*  Email:  TaigaAhri@gmail.com
*  Time:   2023-5-15 23：54
**********************************************/
#include "tools_widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tools_Widget w;
    w.show();

    return a.exec();
}
