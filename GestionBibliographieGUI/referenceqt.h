#ifndef REFERENCEQT_H
#define REFERENCEQT_H

#include <QtGui/QDialog>
#include "ui_referenceqt.h"

class ReferenceQt : public QDialog
{
    Q_OBJECT

public:
    ReferenceQt(QWidget *parent = 0);
    ~ReferenceQt();

private:
    Ui::ReferenceQtClass ui;
};

#endif // REFERENCEQT_H
