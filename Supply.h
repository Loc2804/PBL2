#pragma once
#include "Product.h"
#include <string.h>
#include <iostream>
using namespace std;

class Supply: public Product
{
    private:
        string Producer;
        string Type;
    public:
        Supply(string = "", float = 1.0, int = 1, string = "", string = "");
        ~Supply();
        friend istream& operator>>(istream&, Supply&);
        void Show();
        bool operator==(const Supply&);
        bool operator!=(const Supply&);
};