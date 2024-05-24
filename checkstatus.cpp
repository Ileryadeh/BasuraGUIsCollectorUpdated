#include "checkstatus.h"
#include "ui_checkstatus.h"
#include "mainwindow.h"
#include <QMessageBox>  //added
#include "checkstatus.h"

MainWindow *backC;
CheckStatus::CheckStatus(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CheckStatus)
    , biogarbageLevel(60) // garbage levels
    , nongarbageLevel(45)
    , recygarbageLevel(100)

{
    ui->setupUi(this);
    //bio
    ui->bioProgressBar->setRange(0, 100);//added
    ui->bioProgressBar->setValue(biogarbageLevel);//added

    //nonbio
    ui->nonProgressBar->setRange(0, 100);//added
    ui->nonProgressBar->setValue(nongarbageLevel);//added

    //recyclable
    ui->recyProgressBar->setRange(0, 100);//added
    ui->recyProgressBar->setValue(recygarbageLevel);//added

    updateProgressBarColor(); // Set the initial color added
}
CheckStatus::~CheckStatus()
{
    delete ui;
}

void CheckStatus::on_pushButton_4_clicked()
{
    hide();
    backC = new MainWindow();
    backC->show();
}

void CheckStatus::updateProgressBarColor()
{
    // Update bio progress bar color
    if (biogarbageLevel >= 100) {
        ui->bioProgressBar->setStyleSheet("QProgressBar::chunk { background-color: red; }");
    } else if (biogarbageLevel >= 50) {
        ui->bioProgressBar->setStyleSheet("QProgressBar::chunk { background-color: yellow; }");
    } else {
        ui->bioProgressBar->setStyleSheet("QProgressBar::chunk { background-color: green; }");
    }

    // Update nonbio progress bar color
    if (nongarbageLevel >= 100) {
        ui->nonProgressBar->setStyleSheet("QProgressBar::chunk { background-color: red; }");
    } else if (nongarbageLevel >= 50) {
        ui->nonProgressBar->setStyleSheet("QProgressBar::chunk { background-color: yellow; }");
    } else {
        ui->nonProgressBar->setStyleSheet("QProgressBar::chunk { background-color: green; }");
    }

    // Update recyclable progress bar color
    if (recygarbageLevel >= 100) {
        ui->recyProgressBar->setStyleSheet("QProgressBar::chunk { background-color: red; }");
    } else if (nongarbageLevel >= 50) {
        ui->recyProgressBar->setStyleSheet("QProgressBar::chunk { background-color: yellow; }");
    } else {
        ui->recyProgressBar->setStyleSheet("QProgressBar::chunk { background-color: green; }");
    }
}
