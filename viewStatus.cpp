#include "viewStatus.h"
#include "ui_viewStatus.h"

viewStatus::viewStatus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viewStatus),
    status(NULL)
{
    ui->setupUi(this);
    //loadData();
}

viewStatus::viewStatus(QWidget *parent, Patron* person) :
    QWidget(parent),
    ui(new Ui::viewStatus),
    status(*new AccountStatus(person))
{
    ui->setupUi(this);
    loadData();
}


viewStatus::~viewStatus()
{
    delete ui;
}

void viewStatus::on_backButton_clicked()
{
    close();

}

void viewStatus::loadData(){
    for (Loan loan: status.getLoans() ) {
        ui->loansTitleList->addItem(loan.getTitle());
        ui->dueDateList->addItem(loan.getDueDate());
        ui->daysRemList->addItem(loan.getDaysRemaining());
    }

    map<CatalogueItem, int> holds = status.getHoldList();
    for (auto hold :holds ) {
        ui->holdsTitleList->addItem(QString::fromStdString(hold.first.getTitle()));
        ui->holdsPositionList->addItem(QString::fromStdString(to_string(hold.second)));
    }

}

