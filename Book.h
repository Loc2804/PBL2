#pragma once
#include "Product.h"
#include <string.h>
#include <iostream>
#include <iomanip>
using namespace std;

class Book: public Product
{
    private:
        string Author;
        string Pb; //publishing company: nhà xuất bản
        string Type;
        //string Satus;
    public:
        Book(string = "", float = 1.0, int = 1, string = "", string = "", string = "", int =1);
        ~Book();
        friend istream& operator>>(istream&, Book&);
        friend ostream& operator<<(ostream&, const Book&);
        void Show();
        bool operator==(const Book&);
        bool operator!=(const Book&);
};