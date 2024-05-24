#ifndef MESSAGECOLLECT_H
#define MESSAGECOLLECT_H

#include <QDialog>

namespace Ui {
class MessageCollect;
}

class MessageCollect : public QDialog
{
    Q_OBJECT

public:
    explicit MessageCollect(QWidget *parent = nullptr);
    ~MessageCollect();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MessageCollect *ui;
};

#endif // MESSAGECOLLECT_H
