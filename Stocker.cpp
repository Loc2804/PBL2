#include "Stocker.h"

void Stocker::Input()
{
	int lc;
	while (1)
	{
		cout << "1.Nhap thong tin sach." << endl;
		cout << "2.Nhap thong tin do dung khac." << endl;
		cout << "3.Thoat." << endl;
		cout << "Nhap lua chon cua ban: ";
		cin >> lc;
		if (lc == 1)
		{
			cin >> b;
		}
		if (lc == 2)
		{
			cin >> s;
		}
		if (lc == 3)
		{
			break;
		}
	}
}