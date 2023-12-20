#include "Purchase.h"

Purchase::Purchase( Product pr,  int n)
{
    this->p=pr;
    this->num=n;
    //this->next=NULL;
}

float Purchase::Calculate()
{
    float pPrice = p.GetPrice();
    float totalCost = static_cast<float>(num) * pPrice;
    return totalCost;
}

void Purchase::Show()
{
    cout<<p.GetID()<<setw(30)<< p.GetName() <<setw(15) << p.GetPrice() <<setw(15) << this->num <<endl;
    //p.ShowBill();
}



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

int Purchase::GetQty()
{
    return this->num;
}

Purchase& Purchase::operator=(const Purchase& p1)
{
    this->p = p1.p;
    this->num = p1.num;
    return *this;
}