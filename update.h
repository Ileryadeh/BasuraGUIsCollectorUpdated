#ifndef UPDATE_H
#define UPDATE_H

#include <QDialog>

namespace Ui {
class Update;
}

class Update : public QDialog
{
    Q_OBJECT

public:
    explicit Update(QWidget *parent = nullptr);
    ~Update();

signals:
    void bioGarbageUpdated(int newLevel);

private slots:
    void on_pushButton_4_clicked();
    void on_bioButton_clicked();
    void on_pushButton_2_clicked();
    void on_nonButton_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::Update *ui;
    void updateProgressBarColor();
};

#endif // UPDATE_H
