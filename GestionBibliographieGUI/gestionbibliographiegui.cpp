#include "gestionbibliographiegui.h"
#include "referenceqt.h"

GestionBibliographieGUI::GestionBibliographieGUI(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.actionAjouter_reference, SIGNAL(triggered()), this, SLOT(AjouterUnOuvrage()));
}

GestionBibliographieGUI::~GestionBibliographieGUI()
{

}

//ajoutEmployeComission();


void GestionBibliographieGUI::AjouterUnOuvrage(){
	ReferenceQt rqt;
	rqt.exec();

}



