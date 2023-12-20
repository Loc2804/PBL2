#include <iostream>
#include <string>
#include "Bill.h"
#include "Book.h"
#include "Customer.h"
#include "Template.h"
#include "Supply.h"
#include "QLNV.h"
#include <conio.h>
using namespace std;
int main()
{
	int lc;
	int kh;
	int nv;
	int hd;
	int sp;
	int sp1;
	int sp2;
	QLNV q;
	LinkedList<Customer> k;
	LinkedList<Bill> b;
	LinkedList<Book> p;
	LinkedList<Supply> s;
	cout << "1.Lam viec voi nhan vien." << endl;
	cout << "2.Lam viec voi khach hang." << endl;
	cout << "3.Lam viec voi hoa don." << endl;
	cout << "4.Lam viec voi san pham." << endl;
	cout << "Nhap lua chon cua ban:"; cin >> lc;
	if (lc == 1)
	{
		while (1)
		{
			cout << "1.Them vao nhan vien." << endl;
			cout << "2.Xoa nhan vien." << endl;
			cout << "3.Sua thong tin nhan vien" << endl;
			cout << "4.Xuat thong tin nhan vien." << endl;
			cout << "5.Tim nhan vien" << endl;
			cout << "0.Thoat chuong trinh quan li nhan vien." << endl;
			cout << "Nhap lua chon cua ban: "; cin >> nv;
			if (nv == 1)
			{
				Employee e;
				cin >> e;
				q.Add(e);
			}
			if (nv == 2)
			{
				int m;
				cout << "Nhap vi tri muon xoa:"; cin >> m;
				q.RemoveAt(m);
			}
			if (nv == 3)
			{
				int ID;
				cout << "Nhap ID cua nhan vien can sua:"; cin >> ID;
				q.Update(ID);
			}
			if (nv == 4)
			{
				cout << q;
			}
			if (nv == 5)
			{
				int ID;
				cout << "Nhap ID cua nhan vien can tim:"; cin >> ID;
				q.Find(ID);
			}
			if (nv == 0)
			{
				break;
			}
		}
	}
	if (lc == 2)
	{
		while (1)
		{
			cout << "1.Them vao khach hang." << endl;
			cout << "2.Xoa khach hang." << endl;
			cout << "3.Sua thong tin khach hang" << endl;
			cout << "4.Xuat thong tin khach hang." << endl;
			cout << "5.Tim khach hang. " << endl;
			cout << "0.Thoat chuong trinh quan li khach hang." << endl;
			cout << "Nhap lua chon cua ban: "; cin >> kh;
			if (kh == 1)
			{
				Customer m;
				cin >> m;
				k.AddLast(m);
			}
			if (kh == 2)
			{
				int ID;
				cout << "Nhap ID can xoa:"; cin >> ID;
				k.Delete(ID);
			}
			if (kh == 3)
			{
				int ID;
				cout << "Nhap ID can cap nhat:"; cin >> ID;
				k.Update(ID);
			}
			if (kh == 4)
			{
				k.Display();
			}
			if (kh == 5)
			{
				int ID;
				cout << "Nhap ID can tim:"; cin >> ID;
				k.Findinf(ID);
			}
			if (kh == 0)
			{
				break;
			}
		}
	}
	if (lc == 3)
	{
		while (1)
		{
			cout << "1.Them hoa don." << endl;
			cout << "2.Xuat hoa don." << endl;
			cout << "3.Xoa hoa don." << endl;
			cout << "4.Sua hoa don." << endl;
			cout << "5.Tim hoa don." << endl;
			cout << "0.Thoat chuong trinh quan li hoa don." << endl;
			cout << "Nhap lua chon cua ban:"; cin >> hd;
			if (hd == 1)
			{
				Bill bill;
				cin >> bill;
				b.AddLast(bill);
				system("pause");
				system("cls");
			}
			if (hd == 2)
			{
				system("cls");
				b.Display();
				system("pause");
				system("cls");
			}
			if (hd == 3)
			{
				int ID;
				cout << "Nhap ID can xoa:"; cin >> ID;
				b.Delete(ID);
			}
			if (hd == 4)
			{
				int ID;
				cout << "Nhap ID can cap nhat:"; cin >> ID;
				b.Update(ID);
			}
			if (hd == 5)
			{
				int ID;
				cout << "Nhap ID can tim:"; cin >> ID;
				b.Findinf(ID);
			}
			if (hd == 0)
			{
				break;
			}
		}
	}
	if (lc == 4)
	{
		cout << "1.Lam viec voi sach" << endl;
		cout << "2.Lam viec voi dung cu hoc tap khac." << endl;
		cout << "Nhap lua chon cua ban:"; cin >> sp;
		if (sp == 1)
		{
			while (1)
			{
				cout << "1.Them vao sach." << endl;
				cout << "2.Xoa sach." << endl;
				cout << "3.Sua thong tin sach." << endl;
				cout << "4.Xuat thong tin sach." << endl;
				cout << "5.Tim sach. " << endl;
				cout << "0.Thoat chuong trinh quan li sach." << endl;
				cout << "Nhap lua chon cua ban: "; cin >> sp1;
				if (sp1 == 1)
				{
					Book b;
					cin >> b;
					p.AddLast(b);
				}
				if (sp1 == 2)
				{
					int ID;
					cout << "Nhap ID can xoa:"; cin >> ID;
					p.Delete(ID);
				}
				if (sp1 == 3)
				{
					int ID;
					cout << "Nhap ID can cap nhat:"; cin >> ID;
					p.Update(ID);
				}
				if (sp1 == 4)
				{
					p.Display();
				}
				if (sp1 == 5)
				{
					int ID;
					cout << "Nhap ID can tim:"; cin >> ID;
					p.Findinf(ID);
				}
				if (sp1 == 0)
				{
					break;
				}
			}
		}
		if (sp == 2)
		{
			while (1)
			{
				cout << "1.Them vao dung cu hoc tap." << endl;
				cout << "2.Xoa dung cu hoc tap." << endl;
				cout << "3.Sua thong tin dung cu hoc tap." << endl;
				cout << "4.Xuat thong tin dung cu hoc tap." << endl;
				cout << "5.Tim dung cu hoc tap. " << endl;
				cout << "0.Thoat chuong trinh quan li dung cu hoc tap." << endl;
				cout << "Nhap lua chon cua ban: "; cin >> sp2;
				if (sp2 == 1)
				{
					Supply k;
					cin >> k;
					s.AddLast(k);
				}
				if (sp2 == 2)
				{
					int ID;
					cout << "Nhap ID can xoa:"; cin >> ID;
					s.Delete(ID);
				}
				if (sp2 == 3)
				{
					int ID;
					cout << "Nhap ID can cap nhat:"; cin >> ID;
					s.Update(ID);
				}
				if (sp2 == 4)
				{
					s.Display();
				}
				if (sp2 == 5)
				{
					int ID;
					cout << "Nhap ID can tim:"; cin >> ID;
					s.Findinf(ID);
				}
				if (sp2 == 0)
				{
					break;
				}
			}
		}
	}
}
