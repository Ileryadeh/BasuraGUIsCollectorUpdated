#ifndef SPECI_H
#define SPECI_H

#include <QDialog>

namespace Ui {
class speci;
}

class speci : public QDialog
{
    Q_OBJECT

public:
    explicit speci(QWidget *parent = nullptr);
    ~speci();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_updateStatusButton_clicked();//added

private:
    Ui::speci *ui;
};

#endif // SPECI_H
