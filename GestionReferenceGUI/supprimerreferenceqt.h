#ifndef SUPPRIMERREFERENCEQT_H
#define SUPPRIMERREFERENCEQT_H

#include <QtGui/QDialog>
#include "ui_supprimerreferenceqt.h"

class supprimerReferenceQt : public QDialog
{
    Q_OBJECT

public:
    supprimerReferenceQt(QWidget *parent = 0);
    ~supprimerReferenceQt();

private:
    Ui::supprimerReferenceQtClass ui;
};

#endif // SUPPRIMERREFERENCEQT_H
