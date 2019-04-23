#ifndef AJOUTERJOURNALQT_H
#define AJOUTERJOURNALQT_H

#include <QtGui/QDialog>
#include "ui_ajouterjournalqt.h"

class ajouterJournalQt : public QDialog
{
    Q_OBJECT

public:
    ajouterJournalQt(QWidget *parent = 0);
    ~ajouterJournalQt();

private:
    Ui::ajouterJournalQtClass ui;
};

#endif // AJOUTERJOURNALQT_H
