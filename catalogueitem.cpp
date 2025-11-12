#include "catalogueitem.h"


CatalogueItem::CatalogueItem(const string& title, const string& author, int publishYear, const string& status, const string& condition, const string& format, int quantity) : holds(){
    this->title = title;
    this->author = author;
    this->publishYear = publishYear;
    this->status = status;
    this->condtion = condition;
    this->format = format;
    this->quantity = quantity;
}

string CatalogueItem::getTitle() const{
    return title;
}

string CatalogueItem::getAuthor() const{
    return author;
}

string CatalogueItem::getStatus() const{
    return status;
}

string CatalogueItem::getFormat() const{
    return format;
}

string CatalogueItem::getCondtion() const{
    return condtion;
}

int CatalogueItem::getQuantity(){
    return quantity;
}

void CatalogueItem::reduceQuantity(int amount){
    if (this->quantity - amount >= 0){
        this->quantity = (this->quantity) - amount;
    }
    else{
        std::cout << "The quantity cannot reduce below 0" << std::endl;
    }
}


bool CatalogueItem::equals(const CatalogueItem& item){
    if (this->title == item.title
      && this->author == item.author
        && this->publishYear == item.publishYear
        && this->condtion == item.condtion
        && this->format == item.format)
        return true;
    return false;
}

int CatalogueItem::searchQueue(string name){
    //Looks for the iteraator pointing the specified name
    auto it = find(holds.begin(),holds.end(), name);
    int index =-1;
    if(it != holds.end()){
        index = distance(holds.begin(), it);
    }
    return index;
}

void CatalogueItem::increaseQuantity(int amount){
    this->quantity = quantity + amount;
}


