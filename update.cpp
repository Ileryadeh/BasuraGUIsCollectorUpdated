#include "update.h"
#include "ui_update.h"
#include "mainwindow.h"
#include "bioupdate.h"
#include "nonbioupdate.h"
#include "recyupdate.h"


MainWindow *backU;
bioUpdate *BioUpdate;
nonbioupdate *NonBioUpdate;
recyupdate *RecyUpdate;

Update::Update(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Update)
{
    ui->setupUi(this);

}

Update::~Update()
{
    delete ui;
}

void Update::on_pushButton_4_clicked()
 {
    hide();
    backU = new MainWindow();
    backU->show();
}

void Update::on_bioButton_clicked()
{
    hide();
    BioUpdate = new bioUpdate (this);
    BioUpdate->show();
}


void Update::on_nonButton_clicked()
{
    hide();
    NonBioUpdate= new nonbioupdate (this);
    NonBioUpdate->show();
}


void Update::on_pushButton_3_clicked()
{
    hide();
    RecyUpdate = new recyupdate;
    RecyUpdate->show();
}

