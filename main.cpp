#include "mainwindow.h"
//added

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
void MainWindow::on_bioUpdateButton_clicked() {
    bioUpdateDialog = new bioUpdate(this);
    bioUpdateDialog->exec();
}
