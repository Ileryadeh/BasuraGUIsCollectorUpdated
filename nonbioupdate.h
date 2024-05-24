#ifndef NONBIOUPDATE_H
#define NONBIOUPDATE_H

#include <QDialog>

namespace Ui {
class nonbioupdate;
}
class nonbioupdate : public QDialog
{
    Q_OBJECT

public:
    explicit nonbioupdate(QWidget *parent = nullptr);
    ~nonbioupdate();

private slots:
    void on_nonUpdateButton_clicked();
    void on_nonBackButton_clicked();
    void updateProgressBarColor();
    void on_nonPendingButton_clicked();
    void on_progressBar_valueChanged(int value);
    void on_nonPendingButton_2_clicked();

private:
    Ui::nonbioupdate *ui;
    int nongarbageLevel;
};

#endif // NONBIOUPDATE_H
