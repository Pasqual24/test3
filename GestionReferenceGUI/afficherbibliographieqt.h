#ifndef AFFICHERBIBLIOGRAPHIEQT_H
#define AFFICHERBIBLIOGRAPHIEQT_H

#include <QtGui/QDialog>
#include "ui_afficherbibliographieqt.h"

class afficherBibliographieQt : public QDialog
{
    Q_OBJECT

public:
    afficherBibliographieQt(QWidget *parent = 0);
    ~afficherBibliographieQt();

private:
    Ui::afficherBibliographieQtClass ui;
};

#endif // AFFICHERBIBLIOGRAPHIEQT_H
