#include "speci.h"
#include "ui_speci.h"
#include "update.h"
#include "messagecollect.h"
#include "messagepending.h"

Update *backSpeci;
MessageCollect *messageCollect;
MessagePending *messagePending;

speci::speci(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::speci)
{
    ui->setupUi(this);
}

speci::~speci()
{
    delete ui;
}

void speci::on_pushButton_3_clicked()
{
    hide();
    backSpeci = new Update();
    backSpeci->show();
}

void speci::on_pushButton_clicked()
{
    hide();
    messageCollect = new MessageCollect();
    messageCollect->show();
}

void speci::on_pushButton_2_clicked()
{
    hide();
    messagePending = new MessagePending();
    messagePending->show();
}
