#pragma once
#include <iostream>
#include <string>
//#include <bits/stdc++.h>
using namespace std;

class Person
{
    protected:
        string Name;
        string Gender;
        string Phone;
        string Addr;
        int BD; //birthday
    public:
        Person(string="", string="", string="", string="",int =2000 );
        ~Person();
};