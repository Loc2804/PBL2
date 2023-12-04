#pragma once
#include "Person.h"
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class Employee: public Person
{
    protected:
        int eID; // CCCD
        string Job;
        float Salary;
        int hour; // số giờ làm 1 ngày
        int day; //số ngày làm
    public:
        Employee(int ID) : eID(ID){}
        Employee(string="", string="", string="", string="",int =2000, int=1, string="", float=10.2);
        ~Employee();
        void Show();
        friend ostream& operator<<(ostream&, const Employee&);
        friend istream& operator>>(istream&, Employee&);
        bool operator==(const Employee&);
        int GetID();
        float PayRoll();
        void Put();
};
