#include <string>
#include "patron.h"

Patron::Patron( const string& name, const string& email, int pin){
    this->cardNumber = curUsers++;
    this->name = name;
    this->email = email;
    this->currentAmountLoans = 0;
    this->pin = pin;
}

int Patron::getPin(){
    return pin;
}

std::string Patron::getName(){
    return name;
}

int Patron::getAmountOfLoans(){
    return currentAmountLoans;
}

vector<Loan> Patron::getLoans(){
    return myLoans;
}






