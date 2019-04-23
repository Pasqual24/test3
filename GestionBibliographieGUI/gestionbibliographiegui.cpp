#include "gestionbibliographiegui.h"
#include "referenceqt.h"

GestionBibliographieGUI::GestionBibliographieGUI(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.actionAjouter_reference, SIGNAL(triggered()), this, SLOT(AjouterUnOuvrage()));
	QObject::connect(ui.actionAjouter_reference, SIGNAL(triggered()), this, SLOT(ajouterJournal()));
}

GestionBibliographieGUI::~GestionBibliographieGUI()
{

}

//ajoutEmployeComission();


void GestionBibliographieGUI::AjouterUnOuvrage(){
	ReferenceQt rqt;
	rqt.exec();
}

void GestionBibliographieGUI::ajouterJournal(){
	ReferenceQt jqt;
	jqt.exec();
}



