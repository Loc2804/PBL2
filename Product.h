#pragma once
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class Product
{
    protected:
        string pName; // name of product 
        int pID; // ID of product - Dùng cho cả sách và các dụng cụ khác
        float Price;
        int qty;    //quantity - lượng của sản phẩm còn lại;
    public:
        Product(string="", float=1.0, int=1);
        ~Product(){}
        int GetID();
        virtual void Show();
        string GetName();
        float GetPrice(); 
        void Input();
        friend istream& operator>>(istream&, Product&);
        void ShowBill();// xuất ra tên, ID và giá;
        bool operator==(const Product&);
        friend ostream& operator<<(ostream&, const Product&);
        int GetQty();
        void Reduce(int); //giảm số lượng còn lại của sẩn phẩm trong kho
};