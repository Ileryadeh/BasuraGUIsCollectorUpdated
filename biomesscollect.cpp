#include "biomesscollect.h"
#include "ui_biomesscollect.h"
#include "mainwindow.h"

MainWindow *Home;
bioMessCollect::bioMessCollect(QWidget *parent, const QString &dateTime)
    : QDialog(parent)
    , ui(new Ui::bioMessCollect)
{
    ui->setupUi(this);
    setDateTime(dateTime);
}

bioMessCollect::~bioMessCollect()
{
    delete ui;
}
//for Date and Time
void bioMessCollect::setDateTime(const QString &dateTime)
{
    ui->dateTimeLabel->setText(dateTime);
}

void bioMessCollect::on_pushButton_clicked()
{
    hide();
    Home = new MainWindow (this);
    Home->show();
}

