#pragma once
#include <iostream>
#include  <ctime>
using namespace std;

class Date
{
    private:
        int Day;
        int Month;
        int Year;
        time_t timestamp;
    public:
        Date(int=1, int=1, int =1);
        ~Date();
        void Show();
        friend ostream& operator<<(ostream&, const Date&);
        time_t GetTimestamp() const;
        void SetDate();
        Date GetDate();
};