#include "CatalogueItem.h"

class Book: public CatalogueItem{
    private:
        const string isbn;
        
    public:
        Book(const string& isbn, const string& title, const string& author, int publishYear, const string& status, const string& condtion, const string& format, int quantity): isbn(isbn), CatalogueItem(title, author, publishYear, status, condtion, format,quantity){} ;
        const string& getISBN(){return isbn;};
};

class NonFiction: public Book{
    private:
        const string& dewyNumber;
    public:
        NonFiction(const string& dewyNumber, const string& isbn, const string& title, const string& author, int publishYear, const string& status, const string& condtion, const string& format, int quantity):dewyNumber(dewyNumber), Book(isbn, title, author, publishYear, status, condtion, format,quantity){};
        const string& getDewyNumber(){return dewyNumber;};
};

