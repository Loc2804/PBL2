#pragma once
#include "Customer.h"
#include "Purchase.h"
#include "Date.h"
#include <iostream>
#include <string.h>
#include <ctime>
#include "Template.h"
using namespace std;

class Bill
{
    protected:
        int bID; // ID of bill
        LinkedList<Purchase> a; 
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
        float GetCost() const;
        void Show();
        friend istream& operator>>(istream&, Bill&);
        friend ostream& operator<<(ostream&, const Bill&);
        int GetID();
        void Update(const int&);
        void AddPurchase(const Product&, const int&);
        //void InPut();
        // Hàm tính tổng doanh thu trong ngày
        //float CalculateDailyRevenue();
        // Hàm tính tổng doanh thu trong tháng
        //float CalculateMonthlyRevenue();
        Date GetDate();
};





