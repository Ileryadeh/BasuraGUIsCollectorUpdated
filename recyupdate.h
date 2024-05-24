#ifndef RECYUPDATE_H
#define RECYUPDATE_H

#include <QDialog>

namespace Ui {
class recyupdate;
}

class recyupdate : public QDialog
{
    Q_OBJECT

public:
    explicit recyupdate(QWidget *parent = nullptr);
    ~recyupdate();

private slots:
    void on_recyUpdateButton_clicked();
    void on_recyBackButton_clicked();
    void updateProgressBarColor();
    void on_recyPendingButton_clicked();
    void on_progressBar_valueChanged(int value);


private:
    Ui::recyupdate *ui;
    int recygarbageLevel;
};

#endif // RECYUPDATE_H
