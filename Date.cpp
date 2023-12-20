#include "Date.h"

Date::Date(int D, int M, int Y) : Day(D), Month(M), Year(Y), timestamp(time(0))
{
    struct tm timeinfo = { 0 };
    timeinfo.tm_year = Year - 1900;
    timeinfo.tm_mon = Month - 1;
    timeinfo.tm_mday = Day;
    timestamp = mktime(&timeinfo);
}

Date::~Date()
{}

void Date::Show()
    {
        cout<<Day<<"-"<<Month<<"-"<<Year<<endl;
    }

ostream& operator<<(ostream& o, const Date& d)
{
    o<<d.Day<<"-" << d.Month << "-" << d.Year << endl;
    return o;
}



time_t Date::GetTimestamp() const
{
    return timestamp;
}

void Date::SetDate()
{
    time(&timestamp);
    struct tm timeinfo;
    localtime_s(&timeinfo,&timestamp);
    Day = timeinfo.tm_mday;
    Month = timeinfo.tm_mon + 1;
    Year = timeinfo.tm_year + 1900;
}

Date Date::GetDate()
{
    Date currentDate;
    currentDate.timestamp = time(0);
    struct tm timeinfo;
    localtime_s(&timeinfo,&currentDate.timestamp);
    currentDate.Day = timeinfo.tm_mday;
    currentDate.Month = timeinfo.tm_mon + 1;
    currentDate.Year = timeinfo.tm_year + 1900;
    return currentDate;
}