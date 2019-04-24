#ifndef AJOUTEROUVRAGEQT_H
#define AJOUTEROUVRAGEQT_H

#include <QtGui/QDialog>
#include "ui_ajouterouvrageqt.h"
#include <string>
#include "Ouvrage.h"

class ajouterOuvrageQt : public QDialog
{
    Q_OBJECT

public:
    ajouterOuvrageQt(QWidget *parent = 0);
    ~ajouterOuvrageQt();
    std::string reqAuteurs() const;
    std::string reqTitre() const;
    std::string reqVille() const;
    std::string reqEditeur() const;
    int reqAnnee() const;
    std::string reqIdentifiant() const;
private slots:
    void enregisterOuvrage();

private:
    Ui::ajouterOuvrageQtClass ui;
};

#endif // AJOUTEROUVRAGEQT_H
