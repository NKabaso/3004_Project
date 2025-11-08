#ifndef CATALOGUEITEM_H
#define CATALOGUEITEM_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

class CatalogueItem{
    private:
        const string& title;
        const string& author;
        int publishYear;
        const string& status;
        const string& condtion;
        const string& format;
        int quantity;

    public:
        //Constructor
        CatalogueItem(const string& title, const string& author, int publishYear, const string& status, const string& condtion, const string& format, int quantity);

        //getters
        const string& getTitle();
        const string& getAuthor();
        const string& getStatus();
        const string& getFormat();
        const string& getCondtion();
        int getQuantity();

        void reduceQuantity(int amount);
        void increaseQuantity(int amount);



};

#endif