#pragma once
#include "Customer.h"
#include "Purchase.h"
#include "Date.h"
#include <vector>
#include <iostream>
#include <string.h>
#include <ctime>
#include "Template.h"
#include <limits>
using namespace std;

class Bill
{
    protected:
        int bID; // ID of bill
        // LinkedList<Purchase> a; 
        vector<Purchase> p;
        float Cost; //thành tiền
        Date date;
        Customer cus;
        string pMethod; // payment method- phương thức thanh toán
    public:
        Bill();
        Bill(int, Customer, string);
        ~Bill();
        bool operator==(const Bill&);
        Purchase* CreateP(const Product& ,const int&);
        float GetCost();
        void Show();
        friend istream& operator>>(istream&, Bill&);
        //friend ostream& operator<<(ostream&, const Bill&);
        int GetID();
        void Update(const int&);
        void AddPurchase(const Purchase&);
        Date GetDate();
        Purchase& operator[](const int&);
};





