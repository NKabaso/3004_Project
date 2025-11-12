#ifndef VIEWACCOUNTSTATUS_H
#define VIEWACCOUNTSTATUS_H

#include <QWidget>
#include "accountStatus.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Form; }
QT_END_NAMESPACE

class ViewAccountStatus : public QWidget
{
    Q_OBJECT

public:
    ViewAccountStatus(QWidget *parent = nullptr);
    ~ViewAccountStatus();

private slots:
    void on_backButton_clicked();

private:
    Ui::Form *ui;
    AccountStatus status;
    void loadData();
};
#endif // VIEWACCOUNTSTATUS_H
