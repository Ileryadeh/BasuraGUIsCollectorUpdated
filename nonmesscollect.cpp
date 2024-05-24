#include "nonmesscollect.h"
#include "ui_nonmesscollect.h"
#include "mainwindow.h"

MainWindow *Non;
nonmesscollect::nonmesscollect(QWidget *parent, const QString &dateTime)
    : QDialog(parent)
    , ui(new Ui::nonmesscollect),
    mainWindow(nullptr)
{
    ui->setupUi(this);
    setDateTime(dateTime);
}

nonmesscollect::~nonmesscollect()
{
    delete ui;
    delete mainWindow;
}
//for Date and Time
void nonmesscollect::setDateTime(const QString &dateTime)
{
    ui->nonDateTimeLabel->setText(dateTime);
}

void nonmesscollect::on_pushButton_clicked()
{
    hide();
    if (mainWindow == nullptr) {
        mainWindow = new MainWindow;
    }
    mainWindow->show();
}

