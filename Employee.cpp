#include "Employee.h"

Employee::Employee(string name, string gen, string phone, string adr, int BD, int id, string job, float sal)
    :Person(name, gen, phone, adr, BD)
{
    this->eID=id;
    this->Job=job;
    this->Salary=sal;
}

Employee::~Employee(){}
void Employee::Show()
{
    cout<<this->eID<<","<<this->Name<<","<<this->Gender<<","<<this->BD<<","
    <<this->Phone<<","<<this->Addr<<","<<this->Job<<endl;
}

ostream& operator<<(ostream& o, const Employee& e)
{
    o << e.eID<<setw(30)<<e.Name<<setw(7)<<e.Gender<<setw(7)<<e.BD<<setw(15)
    <<e.Phone<<setw(25)<<e.Addr<<endl;
    return o;
}

istream& operator>>(istream& i, Employee& e)
{
    cout<<"ID: "; i>>e.eID;
    fflush(stdin);
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout<<"Ten nhan vien: "; getline(i,e.Name);
    fflush(stdin);
    cout<<"Gioi tinh: "; getline(i,e.Gender);
    fflush(stdin);
    cout<<"SDT: "; getline(i,e.Phone);
    fflush(stdin);
    cout<<"Dia chi: ";getline(i,e.Addr);
    fflush(stdin);
    cout<<"Nam sinh: "; i>>e.BD;
    fflush(stdin);
    return i;
}

bool Employee::operator==(const Employee& e)
{
    return (this->eID == e.eID);
}

int Employee::GetID()
{
    return this->eID;
}

float Employee::PayRoll()
{
    Salary=float(hour) * float(day) * 20000;
    return this->Salary;
}

void Employee::Put()
{
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Ten nhan vien: "; getline(cin, Name);
    fflush(stdin);
    cout << "Gioi tinh: "; getline(cin, Gender);
    fflush(stdin);
    cout << "SDT: "; getline(cin, Phone);
    fflush(stdin);
    cout << "Dia chi: "; getline(cin, Addr);
    fflush(stdin);
    cout << "Nam sinh: "; cin >> BD;
    fflush(stdin);
}