#include "Person.h"

Person::Person(string name, string gen, string phone, string adr, int BD)
{
    this->Name=name;
    this->Gender=gen;
    this->Phone=phone;
    this->Addr=adr;
    this->BD=BD;
}
Person::~Person(){}