#include "Purchase.h"

Purchase::Purchase( Product pr,  int n)
{
    this->p=pr;
    this->num=n;
    //this->next=NULL;
}

float Purchase::Calculate()
{
    return p.GetPrice() * float(num);
}

void Purchase::Show()
{
    cout<<p.GetID()<<setw(20)<< p.GetName() <<setw(15) << p.GetPrice() <<setw(7) << this->num <<endl;
    //p.ShowBill();
}

//Purchase* Purchase::GetNext()
//{
//    return next;
//}
//
//void Purchase::SetNext(Purchase* p)
//{
//    next=p;
//}

void Purchase::ReduceQty(int n)
{
    p.Reduce(n);
}

ostream& operator<<(ostream& o, const Purchase& b)
{
    o << b.p << setw(7) << b.num << endl;
    return o;
}

//istream& operator>>(istream& i, Purchase& p)
//{
//    int lc;
//    while(1)
//    {
//        cout << "1.nhap them san pham." << endl;
//        cout << "2.thoat." << endl;
//        cout << "nhap lua chon:";
//        cin >> lc;
//        if (lc == 1)
//        {
//            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//            i >> p.p;
//            cout << "so luong:"; i >> p.num;
//            //p.reduceqty(p.num);
//        }
//        if (lc == 2)
//        {
//           break;
//        }
//    }
//    return i;
//}

istream& operator>>(istream& i, Purchase& p)
{
    i >> p.p;
    cout << "So luong:"; cin >> p.num;
    return i;
}

int Purchase::GetID()
{
    return ID;
}

bool Purchase::operator==(const Purchase& p)
{
    return (this->ID == p.ID);
}

