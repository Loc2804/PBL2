#include "../../PBL2_VSC/Code/Clerk.h"

void Clerk::PrintBill()
{
	cout << "Ma nhan vien:" << eID << endl;
	cout << "Ten nhan vien" << Name<<endl;
	b.Show();
}

void Clerk::UpdateBill(const int& m)
{
	b.Update(m);
}

