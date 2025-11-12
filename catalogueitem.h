#ifndef CATALOGUEITEM_H
#define CATALOGUEITEM_H

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

class CatalogueItem{
private:
    string title;
    string author;
    int publishYear;
    string status;
    string condtion;
    string format;
    int quantity;
    vector<string> holds;

public:
    //Constructor
    CatalogueItem(const string& title, const string& author, int publishYear, const string& status, const string& condition, const string& format, int quantity);

    //getters
    string getTitle() const;
    string getAuthor()const;
    string getStatus()const;
    string getFormat()const;
    string getCondtion() const;

    int getQuantity();

    bool equals(const CatalogueItem& item);
    int  searchQueue(string name);

    void reduceQuantity(int amount);
    void increaseQuantity(int amount);



};

#endif
