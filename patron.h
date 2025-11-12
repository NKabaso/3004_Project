#include <vector>
#include <string>
#include "loan.h"
#include <string>

using std::string;

class Patron {
private:
    int curUsers = 0;
    int cardNumber;
    string name;
    string email;
    int currentAmountLoans;
    int pin;
    std::vector<Loan> myLoans;

public:
    Patron(const string& name, const string& email, int pin);
    void addLoan(Loan);

    int getPin();
    std::string getName();
    std::vector<Loan> getLoans();
    int getAmountOfLoans();
    void ViewAccountStatus();

};
