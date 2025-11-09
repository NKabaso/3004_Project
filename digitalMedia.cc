#include "CatalogueItem.h"

class digitalMedia: public CatalogueItem{
private:
    const string& genre;
    const string& rating;
    const string& type;
public:
    digitalMedia( const string& genre, const string& rating, const string& type, const string& title, const string& author, int publishYear, const string& status, const string& condtion, const string& format, int quantity): 
    genre(genre), rating(rating), type(type), CatalogueItem(title, author, publishYear, status, condtion, format,quantity){};

    //getters
    const string& getGenre();
    const string& getRating();
    const string& getType();

};

