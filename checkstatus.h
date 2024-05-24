#ifndef CHECKSTATUS_H
#define CHECKSTATUS_H

#include <QDialog>

namespace Ui { class CheckStatus; }
QT_END_NAMESPACE

class CheckStatus : public QDialog
{
    Q_OBJECT

public:
    explicit CheckStatus(QWidget *parent = nullptr);
    ~CheckStatus();

private slots:
    void on_pushButton_4_clicked();


private:
    Ui::CheckStatus *ui;
    int biogarbageLevel;//added
    int nongarbageLevel;//added
    int recygarbageLevel;//added
    void updateProgressBarColor();

};

#endif // CHECKSTATUS_H
