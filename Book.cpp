#include "Book.h"
#include <string>

Book::Book(string n, float c, int k, string m, string p, string t, int ID)
	:Product(n, c, k)
{
	pID = ID;
	Author = m;
	Pb = p;
	Type = t;
}

Book::~Book(){}

istream& operator>>(istream& i, Book& b)
{
	cout << "Nhap ID:"; i >> b.pID;
	fflush(stdin);
	cout << "Ten san pham:"; getline(i, b.pName);
	fflush(stdin);
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Gia san pham:"; i >> b.Price;
	cout << "So luong con lai trong kho:"; i >> b.qty;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Ten tac gia:"; getline(i, b.Author);
	fflush(stdin);
	cout << "Ten nha xuat ban:"; getline(i, b.Pb);
	fflush(stdin);
	cout << "The loai:"; getline(i, b.Type);
	fflush(stdin);
	return i;
}

void Book::Show()
{
	Product::Show();
	cout<<Author << setw(20) << Pb << setw(15) << Type << setw(20) << Price << setw(7) << qty << endl;
	//cout << pID << setw(30) << pName << setw(20) << Author << setw(20) << Pb << setw(15) << Type << setw(20) << Price << setw(7) << qty << endl;
}

bool Book::operator==(const Book& b)
{
	return (this->pID == b.pID);
}

bool Book::operator!=(const Book& b)
{
	return (this->pID != b.pID);
}
