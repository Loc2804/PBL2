//stocker: thủ kho
#include "Employee.h"
#include "Book.h"
#include "Supply.h"
#include <iostream>
using namespace std;

class Stocker: public Employee
{
    private:
        Supply s;
        Book b;
    public:
        void Input();
};