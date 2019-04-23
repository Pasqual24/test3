#ifndef AJOUTERJOURNAL_H
#define AJOUTERJOURNAL_H

#include <QtGui/QDialog>
#include "ui_ajouterjournal.h"

class ajouterJournal : public QDialog
{
    Q_OBJECT

public:
    ajouterJournal(QWidget *parent = 0);
    ~ajouterJournal();

private:
    Ui::ajouterJournalClass ui;
};

#endif // AJOUTERJOURNAL_H
