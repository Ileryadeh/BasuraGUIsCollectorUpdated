#include "updatespecific.h"
#include "ui_updatespecific.h"


UpdateSpecific::UpdateSpecific(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdateSpecific)
{
    ui->setupUi(this);
}

UpdateSpecific::~UpdateSpecific()
{
    delete ui;
}


