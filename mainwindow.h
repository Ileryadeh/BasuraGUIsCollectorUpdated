#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <checkstatus.h>
#include <update.h>
#include "bioupdate.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void on_bioUpdateButton_clicked();

private:
    Ui::MainWindow *ui;
    CheckStatus *checkstatus;
    Update *update;
    //added new
    bioUpdate *bioUpdateDialog;
    void createDialogs();

};
#endif // MAINWINDOW_H
