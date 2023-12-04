#pragma once
#include "Employee.h"
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class QLNV
{
    private:
        int n;
        Employee *p;
    public:
        QLNV();
        ~QLNV();
        friend ostream& operator<<(ostream&, const QLNV&);
        void Add(const Employee&);
        void Input(const int&);
        int IndexOf(const Employee&);
        void RemoveAt(const int&);
        void Remove(const Employee&);
        void Update(const int&);
        Employee& operator[](const int&);
        void Find(const int&);
        int GetNum();
};