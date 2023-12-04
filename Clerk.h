// clerk: kế toán
#pragma once
#include "Bill.h"
#include "Employee.h"

class Clerk: public Employee
{
    private:
        Bill b;
    public:
        void PrintBill(); //in 1 Bill
        void UpdateBill(const int&); //Sửa 1 Bill
        void CancelBill(); //Hủy 1 Bill
};