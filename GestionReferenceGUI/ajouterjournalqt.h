#ifndef AJOUTERJOURNALQT_H
#define AJOUTERJOURNALQT_H

#include <QtGui/QDialog>
#include "ui_ajouterjournalqt.h"
#include <string>
#include "Journal.h"

class ajouterJournalQt : public QDialog
{
    Q_OBJECT

public:
    ajouterJournalQt(QWidget *parent = 0);
    ~ajouterJournalQt();
    std::string reqAuteurs() const;
    std::string reqTitre() const;
    std::string reqNom() const;
    std::string reqIdentifiant() const;
    int reqAnnee() const;
    int reqVolume() const;
    int reqNumero() const;
    int reqPage() const;

private slots:
	void enregistrerJournal();

private:
    Ui::ajouterJournalQtClass ui;
};

#endif // AJOUTERJOURNALQT_H
