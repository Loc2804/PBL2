#pragma once
#include <iostream>
#include "Product.h"
#include <iomanip>

using namespace std;

class Purchase
{
    public:
        int ID;
        Product p;
        int num; // số lượng sản phẩm mua
        //Purchase* next;
    public: 
        /*Purchase()
        {
            Product m("0",0,0);
            this->p=m;
            this->num=0;
        }*/
        Purchase(Product, int);
        ~Purchase(){}
        float Calculate();
        void Show();
        friend ostream& operator<<(ostream&, const Purchase&);
        friend istream& operator>>(istream&, Purchase&);
        void ReduceQty(int);
        int GetID();
        bool operator==(const Purchase&);
};


