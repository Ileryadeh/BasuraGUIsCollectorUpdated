#ifndef NONMESSCOLLECT_H
#define NONMESSCOLLECT_H

#include <QDialog>

namespace Ui {
class nonmesscollect;
}
class MainWindow;

class nonmesscollect : public QDialog
{
    Q_OBJECT

public:
    explicit nonmesscollect(QWidget *parent = nullptr, const QString &dateTime = "");
    ~nonmesscollect();
    //added for date and time
    void setDateTime(const QString &dateTime);

private slots:
    void on_pushButton_clicked();

private:
    Ui::nonmesscollect *ui;
    MainWindow *mainWindow;
};

#endif // NONMESSCOLLECT_H
