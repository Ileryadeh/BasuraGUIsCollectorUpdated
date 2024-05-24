#include "bioupdate.h"
#include "ui_bioupdate.h"
#include "update.h"
#include <QMessageBox>
#include <QDebug>
#include "biomesscollect.h"
#include "messagepending.h"
//for Date and Time
#include <QDateTime>


Update *biobackUpdate;
bioMessCollect *BioMessCollect = nullptr;
MessagePending *bioMessPending;

bioUpdate::bioUpdate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::bioUpdate),
    biogarbageLevel(60) //added
{
    ui->setupUi(this);
    //added for update
    ui->progressBar->setRange(0, 100);
    //bio
    ui->progressBar->setValue(biogarbageLevel);
    connect(ui->bioUpdateButton, &QPushButton::clicked, this, &bioUpdate::on_bioUpdateButton_clicked);
    updateProgressBarColor();

}

bioUpdate::~bioUpdate()
{
    delete ui;
    delete BioMessCollect;
}

void bioUpdate::on_bioBackButton_clicked()
{
    hide();
    biobackUpdate = new Update (this);
    biobackUpdate->show();
}

//added
void bioUpdate::updateProgressBarColor()
{
    if (biogarbageLevel >= 100) {
        ui->progressBar->setStyleSheet("QProgressBar::chunk { background-color: red; }");
    } else if (biogarbageLevel >= 50) {
        ui->progressBar->setStyleSheet("QProgressBar::chunk { background-color: yellow; }");
    } else {
        ui->progressBar->setStyleSheet("QProgressBar::chunk { background-color: green; }");
    }
}

void bioUpdate::on_bioUpdateButton_clicked()
{
    // Reset the garbage level to zero and update the progress bar
    biogarbageLevel = 0;
    ui->progressBar->setValue(biogarbageLevel);
    updateProgressBarColor(); // Update the color based on the new value

    //date and time
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");


    //dialog for message
    if (!BioMessCollect) {
        hide();
        BioMessCollect = new bioMessCollect(this);
        BioMessCollect->setDateTime(dateTimeString);
        BioMessCollect->show();
    } else {
        hide();
        BioMessCollect->setDateTime(dateTimeString);
        BioMessCollect->setVisible(true);
    }

}

void bioUpdate::on_bioPendingButton_clicked()
{
    hide();
    bioMessPending = new MessagePending (this);
    bioMessPending->show();
}

