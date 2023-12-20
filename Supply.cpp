#include "Supply.h"
#include <string>

Supply::Supply(string n, float c, int k, string m, string t)
	:Product(n, c, k)
{
	Producer = m;
	Type = t;
}

Supply::~Supply() {}

istream& operator>>(istream& i, Supply& s)
{
	cout << "Nhap ID:"; cin >> s.pID;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Ten san pham:"; getline(i, s.pName);
	fflush(stdin);
	cout << "Gia san pham:"; i >> s.Price;
	cout << "So luong con lai trong kho:"; i >> s.qty;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Ten nha san xuat:"; getline(i, s.Producer);
	fflush(stdin);
	cout << "The loai:"; getline(i, s.Type);
	fflush(stdin);
	return i;
}

void Supply::Show()
{
	cout << pID << setw(30) << pName << setw(20) << Producer<< setw(15) << Type << setw(20) << Price << setw(7) << qty << endl;
}

bool Supply::operator==(const Supply& c)
{
	return (this->pID == c.pID);
}

bool Supply::operator!=(const Supply& c)
{
	return (this->pID != c.pID);
}
