#ifndef LOAN_H
#define LOAN_H

#include "catalogueitem.h"
#include <string>

class Loan {

public:
    Loan(const CatalogueItem& item);

private:
    int remainingDays;
    CatalogueItem item;
};


#endif // LOAN_H
