#ifndef RECYMESSCOLLECT_H
#define RECYMESSCOLLECT_H

#include <QDialog>

namespace Ui {
class recymesscollect;
}
class MainWindow;
class recymesscollect : public QDialog
{
    Q_OBJECT

public:
    explicit recymesscollect(QWidget *parent = nullptr, const QString &dateTime = "");
    ~recymesscollect();
    //added for date and time
    void setDateTime(const QString &dateTime);

private slots:
    void on_pushButton_clicked();

private:
    Ui::recymesscollect *ui;
    MainWindow *mainWindow;
};

#endif // RECYMESSCOLLECT_H
