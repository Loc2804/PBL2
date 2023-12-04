#include "Product.h"
#include <string>


Product::Product(string n, float m, int c)
{
    this->pName=n;
    this->Price=m;
    this->qty=c;
}

int Product::GetID() 
{
    return this->pID;
}

string Product::GetName() 
{
    return this->pName;
}

float Product::GetPrice() 
{
    return this->Price;
}

istream& operator>>(istream& i, Product& p)
{
    cout << "Ma SP:"; i >> p.pID;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout<<"Ten SP: "; getline(i,p.pName);
    cout << "Gia SP: "; i >> p.Price;
    return i;
}

bool Product::operator==(const Product& p)
{
    return (this->pID==p.pID);
}

void Product::ShowBill()
{
    cout << this->pID << setw(20) << this->pName << setw(15) << this->Price << endl;
}

ostream& operator<<(ostream& o, const Product& p)
{
    o << p.pID << setw(20) << p.pName << setw(15) << p.Price;
    return o;
}

int Product::GetQty()
{
    return this->qty;
}

void Product::Reduce(int n)
{
    if (n <= qty)
    {
        qty -= n;
    }
    else cout << "Khong du so luong cung cap!" << endl;
}

void Product::Input()
{
    cout << "Ten san pham:"; getline(cin, pName);
    fflush(stdin);
    cout << "Gia san pham:"; cin >> Price;
    cout << "So luong con lai trong kho:"; cin >> qty;
}