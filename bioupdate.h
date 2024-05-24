#ifndef BIOUPDATE_H
#define BIOUPDATE_H

#include <QDialog>

namespace Ui {
class bioUpdate;
}

class bioUpdate : public QDialog
{
    Q_OBJECT

public:
    explicit bioUpdate(QWidget *parent = nullptr);
    ~bioUpdate();

private slots:
    void on_bioBackButton_clicked();
    //added for update
    void on_bioUpdateButton_clicked();
    void updateProgressBarColor();
    void on_bioPendingButton_clicked();

private:
    Ui::bioUpdate *ui;
    int biogarbageLevel;

};

#endif // BIOUPDATE_H
