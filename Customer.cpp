#include "Customer.h"
#include <string>

Customer::Customer(string name, string gen, string phone, string adr, int BD, int ID)
    :Person(name, gen, phone, adr, BD)
{
    this->cID = ID;
}

Customer::~Customer(){}
void Customer::Show()
{
    cout<<this->cID<<setw(30)<<this->Name<<setw(7)<<this->Gender<<setw(7)<<this->BD<<setw(15)
    <<this->Phone<<setw(25)<<this->Addr<<endl;
}

ostream& operator<<(ostream& o, const Customer& c)
{
    o << c.cID<<"\t"<<c.Name<<"\t"<<c.Gender<<"\t"<<c.BD<<"\t"
    <<c.Phone<<"\t"<<c.Addr<<endl;
    return o;
}

istream& operator>>(istream& i, Customer& c)
{
    cout << "Nhap ID:"; i >> c.cID;
    fflush(stdin);
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout<<"Ten KH: "; getline(i,c.Name);
    fflush(stdin);
    cout<<"Gioi tinh: "; getline(i,c.Gender);
    fflush(stdin);
    cout<<"SDT: "; getline(i,c.Phone);
    fflush(stdin);
    cout<<"Dia chi: ";getline(i,c.Addr);
    fflush(stdin);
    cout<<"Nam sinh: "; i>>c.BD;
    fflush(stdin);
    return i;
}

bool Customer::operator==(const Customer& c)
{   
    return (this->cID==c.cID);
}

bool Customer::operator!=(const Customer& c)
{
    return (this->cID != c.cID);
}

int Customer::GetID()
{
    return this->cID;
}

string Customer::GetName()
{
    return this->Name;
}

void Customer::Update(const int& m)
{
    Customer c;
    cout << "--------Nhap lai thong tin khach hang--------" << endl;
    cin >> c;
    c.cID = m;
}

void Customer::Put()
{
    cout << "Nhap ID:"; cin >> cID;
    fflush(stdin);
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Ten KH: "; getline(cin,Name);
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