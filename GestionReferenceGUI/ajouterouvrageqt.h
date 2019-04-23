#ifndef AJOUTEROUVRAGEQT_H
#define AJOUTEROUVRAGEQT_H

#include <QtGui/QDialog>
#include "ui_ajouterouvrageqt.h"

class ajouterOuvrageQt : public QDialog
{
    Q_OBJECT

public:
    ajouterOuvrageQt(QWidget *parent = 0);
    ~ajouterOuvrageQt();

private:
    Ui::ajouterOuvrageQtClass ui;
};

#endif // AJOUTEROUVRAGEQT_H
