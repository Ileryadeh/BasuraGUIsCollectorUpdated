#include "nonbioupdate.h"
#include "ui_nonbioupdate.h"
#include "update.h"
#include <QMessageBox>
#include <QDebug>
#include "messagepending.h"
#include "nonmesscollect.h"
//for Date and Time
#include <QDateTime>

Update *nonbackUpdate;
nonmesscollect *NonMessCollect = nullptr;

nonbioupdate::nonbioupdate(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::nonbioupdate),
    nongarbageLevel(45)
{
    ui->setupUi(this);
    ui->progressBar->setRange(0, 100);
    ui->progressBar->setValue(nongarbageLevel);

    updateProgressBarColor();
// connection
    connect(ui->nonUpdateButton, &QPushButton::clicked, this, &nonbioupdate::on_nonUpdateButton_clicked);
}

nonbioupdate::~nonbioupdate()
{
    delete ui;
    delete NonMessCollect;
}

void nonbioupdate::on_nonBackButton_clicked()
{
    hide();
    nonbackUpdate = new Update(this);
    nonbackUpdate->show();
}

void nonbioupdate::updateProgressBarColor()
{
    if (nongarbageLevel >= 100) {
        ui->progressBar->setStyleSheet("QProgressBar::chunk { background-color: red; }");
    } else if (nongarbageLevel >= 50) {
        ui->progressBar->setStyleSheet("QProgressBar::chunk { background-color: yellow; }");
    } else {
        ui->progressBar->setStyleSheet("QProgressBar::chunk { background-color: green; }");
    }
}
//
void nonbioupdate::on_nonUpdateButton_clicked()
{
    // Reset the garbage level to zero and update the progress bar
    nongarbageLevel = 0;
    ui->progressBar->setValue(nongarbageLevel);
    updateProgressBarColor(); // Update the color based on the new value

    //date and time
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");


    //dialog for message
    if (!NonMessCollect) {
        hide();
        NonMessCollect = new nonmesscollect(this);
        NonMessCollect->setDateTime(dateTimeString);
        NonMessCollect->show();
    } else {
        hide();
        NonMessCollect->setDateTime(dateTimeString);
        NonMessCollect->setVisible(true);
    }

}

void nonbioupdate::on_nonPendingButton_clicked()
{
    hide();
    MessagePending *nonMessPending = new MessagePending(this);
    nonMessPending->show();
}




