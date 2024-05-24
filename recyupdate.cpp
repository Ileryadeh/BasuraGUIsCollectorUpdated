#include "recyupdate.h"
#include "ui_recyupdate.h"
#include "update.h"
#include <QMessageBox>
#include <QDebug>
#include "messagepending.h"
#include "recymesscollect.h"
//for Date and Time
#include <QDateTime>


Update *recybackUpdate;
recymesscollect *RecyMessCollect = nullptr;

recyupdate::recyupdate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::recyupdate),
    recygarbageLevel(100)
{
    ui->setupUi(this);
    ui->progressBar->setRange(0, 100);
    ui->progressBar->setValue(recygarbageLevel);

    updateProgressBarColor();

    // Connection
    connect(ui->recyUpdateButton, &QPushButton::clicked, this, &recyupdate::on_recyUpdateButton_clicked);

}

recyupdate::~recyupdate()
{
    delete ui;
    delete RecyMessCollect;
}
void recyupdate::on_recyBackButton_clicked()
{
    hide();
    recybackUpdate = new Update(this);
    recybackUpdate->show();
}
void recyupdate::updateProgressBarColor()
{
    if (recygarbageLevel >= 100) {
        ui->progressBar->setStyleSheet("QProgressBar::chunk { background-color: red; }");
    } else if (recygarbageLevel >= 50) {
        ui->progressBar->setStyleSheet("QProgressBar::chunk { background-color: yellow; }");
    } else {
        ui->progressBar->setStyleSheet("QProgressBar::chunk { background-color: green; }");
    }
}
void recyupdate::on_recyUpdateButton_clicked()
{
    // Reset the garbage level to zero and update the progress bar
    recygarbageLevel = 0;
    ui->progressBar->setValue(recygarbageLevel);
    updateProgressBarColor(); // Update the color based on the new value

    //date and time
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");

    //dialog for message
    if (!RecyMessCollect) {
        hide();
        RecyMessCollect = new recymesscollect(this);
        RecyMessCollect->setDateTime(dateTimeString);
        RecyMessCollect->show();
    } else {
        hide();
        RecyMessCollect->setDateTime(dateTimeString);
        RecyMessCollect->setVisible(true);
    }
}
void recyupdate::on_recyPendingButton_clicked()
{
    hide();
    MessagePending *recyMessPending = new MessagePending(this);
    recyMessPending->show();
}

