#include "viewAccountStatus.h"
#include "ui_textfinder.h" // view ui isn't properply integrated

ViewAccountStatus::ViewAccountStatus(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    loadData();
}

ViewAccountStatus::~ViewAccountStatus()
{
    delete ui;
}

void ViewAccountStatus::loadData(){
    for (Loan loan: status.getLoans() ) {
        ui->loansTitleList->addItem(loan.getTitle());
        ui->dueDateList->addItem(loan.getDueDate());
        ui->daysRemList->addItem(loan.getDaysRemaining());
    }

    map<CatalogueItem, int> holds = status.getHoldList();
    for (auto hold :holds ) {
        ui->holdsTitleList->addItem(hold.first.getTitle());
        ui->holdsPositionList->addItem(hold.second);
    }


}

void ViewAccountStatus::on_backButton_clicked(){
    close();
}

