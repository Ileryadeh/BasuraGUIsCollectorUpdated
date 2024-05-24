#include "recymesscollect.h"
#include "ui_recymesscollect.h"
#include "mainwindow.h"

MainWindow *Recy;

recymesscollect::recymesscollect(QWidget *parent, const QString &dateTime)
    : QDialog(parent)
    , ui(new Ui::recymesscollect)
    , mainWindow(nullptr)
{
    ui->setupUi(this);
    setDateTime(dateTime);
}

recymesscollect::~recymesscollect()
{
    delete ui;
    delete mainWindow;
}
//for Date and Time
void recymesscollect::setDateTime(const QString &dateTime)
{
    ui->recyDateTimeLabel->setText(dateTime);
}

void recymesscollect::on_pushButton_clicked()
{
    hide();
    if (mainWindow == nullptr) {
        mainWindow = new MainWindow;
    }
    mainWindow->show();
}
