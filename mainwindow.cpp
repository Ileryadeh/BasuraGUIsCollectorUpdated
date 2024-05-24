#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "checkstatus.h"
#include "update.h"
#include "bioupdate.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    checkstatus(nullptr),
    bioUpdateDialog(nullptr)
{
    ui->setupUi(this);
    createDialogs();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete checkstatus;
    delete bioUpdateDialog;

}
//added new
void MainWindow::createDialogs()
{
    checkstatus = new CheckStatus(this);
    bioUpdateDialog = new bioUpdate(this);

}

void MainWindow::on_pushButton_3_clicked()
{
    hide();
    update = new Update(this);
    update->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    hide();
    checkstatus = new CheckStatus(this);
    checkstatus -> show();
}

