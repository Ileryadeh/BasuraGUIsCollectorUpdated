#ifndef BIOMESSCOLLECT_H
#define BIOMESSCOLLECT_H

#include <QDialog>

namespace Ui {
class bioMessCollect;
}

class bioMessCollect : public QDialog
{
    Q_OBJECT

public:
    explicit bioMessCollect(QWidget *parent = nullptr, const QString &dateTime = "");
    ~bioMessCollect();
    //added for date and time
    void setDateTime(const QString &dateTime);

private slots:
    void on_pushButton_clicked();

private:
    Ui::bioMessCollect *ui;
};

#endif // BIOMESSCOLLECT_H
