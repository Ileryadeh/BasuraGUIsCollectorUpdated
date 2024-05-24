#ifndef MESSAGEPENDING_H
#define MESSAGEPENDING_H

#include <QDialog>

namespace Ui {
class MessagePending;
}

class MessagePending : public QDialog
{
    Q_OBJECT

public:
    explicit MessagePending(QWidget *parent = nullptr);
    ~MessagePending();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MessagePending *ui;
};

#endif // MESSAGEPENDING_H
