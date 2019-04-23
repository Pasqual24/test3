#include "gestionreferencegui.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GestionReferenceGUI w;
    w.show();
    return a.exec();
}
