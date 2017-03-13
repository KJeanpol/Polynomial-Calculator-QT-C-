#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "Monomial.h"
#include <vector> // Arreglos dinamicos
#include <algorithm>
#include "Polynomial.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
