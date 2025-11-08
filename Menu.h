#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

class Menu {
    
    private:
        map<string, string> patrons;
        map<string, string> librarians;
        map<string, string> admins;
    public:
        //constructor
        Menu();

        //Logins in user
        bool Login(const string& username, const string& password);
        
};

#endif