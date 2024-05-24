#include "messagepending.h"
#include "ui_messagepending.h"
#include "mainwindow.h"

MainWindow *backHome2;
MessagePending::MessagePending(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MessagePending)
{
    ui->setupUi(this);
}

MessagePending::~MessagePending()
{
    delete ui;
}

void MessagePending::on_pushButton_clicked()
{
    hide();
    backHome2 = new MainWindow();
    backHome2->show();
}

