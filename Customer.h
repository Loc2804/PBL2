// #ifndef CUSTOMER_H
// #define CUSTOMER_H
#pragma once
#include "Person.h"
#include <iomanip>
using namespace std;

class Customer: public Person
{
    private:
        int cID;//ID of customer
    public:
        Customer( string = "", string = "", string = "", string = "", int = 1, int =1);
        ~Customer();
        void Show();
        friend ostream& operator<<(ostream&, const Customer&);
        friend istream& operator>>(istream&, Customer&);
        bool operator==(const Customer&);
        bool operator!=(const Customer&);
        int GetID();
        string GetName();
        void Update(const int&);
        void Put();
};

// #endif CUSTOMER_H
