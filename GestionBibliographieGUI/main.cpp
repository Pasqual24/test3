#include "gestionbibliographiegui.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GestionBibliographieGUI w;
    w.show();
    return a.exec();
}
