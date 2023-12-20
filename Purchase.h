#pragma once
#include <iostream>
#include "Product.h"
#include <iomanip>

using namespace std;

class Purchase
{
    public:
        Product p;
        int num; // số lượng sản phẩm mua
    public: 
        Purchase()
        {
            Product pro;
            int num = 1;
            p = pro;
        }
        Purchase(Product, int);
        ~Purchase(){}
        float Calculate();
        void Show();
        friend ostream& operator<<(ostream&, const Purchase&);
        friend istream& operator>>(istream&, Purchase&);
        void ReduceQty(int);
        int GetQty();
        Purchase& operator=(const Purchase&);
        //bool operator==(const Purchase&);
};


