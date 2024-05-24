#include "messagecollect.h"
#include "ui_messagecollect.h"
#include "mainwindow.h"

MainWindow *backHome;
MessageCollect::MessageCollect(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MessageCollect)
{
    ui->setupUi(this);
}

MessageCollect::~MessageCollect()
{
    delete ui;
}

void MessageCollect::on_pushButton_clicked()
{
    hide();
    backHome = new MainWindow();
    backHome->show();
}

