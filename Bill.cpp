#include "Bill.h"

Bill::Bill()
{}

Bill::Bill(int ID, Customer c, string p)
{
    this->bID = ID;
    this->cus = c;
    this->pMethod = p;
}

Bill::~Bill()
{
 
}

bool Bill::operator==(const Bill& b)
{
    return (this->bID == b.bID);
}

float Bill::GetCost() 
{
    float cost = 0;
    for(int i=0;i<p.size();i++)
    {
        cost= cost + p[i].Calculate();
    }
    return cost;
}

Purchase* Bill::CreateP(const Product& p, const int& m)
{
    Purchase* tmp = new Purchase(p, m);
    return tmp;
}

void Bill::AddPurchase(const Purchase& pur)
{
    p.push_back(pur);
}

void Bill::Show()
{
    Date date;
    Date currentDate = date.GetDate();
    cout << setw(35) <<"HOA DON " << this->bID << endl;
    cout << "------------------CAC SAN PHAM DA MUA LA---------------------"<<endl;
    cout << "MA SAN PHAM" << setw(20) << "TEN" << setw(15) << "GIA" << setw(15) << "SO LUONG" << endl;
    if (!p.empty())
    {
        for (int i = 0; i < p.size(); i++)
        {
            p[i].Show();
        }
    }
    else
    {
        cout << "KHONG CO SAN PHAM NAO!" << endl;
    }
    cout << "-------------------------------------------------------------" << endl;
    cout << "ngay ra hoa don: ";
    currentDate.Show();
    cout << "MA KHACH HANG:" << cus.GetID() << setw(30) << "TEN KHACH HANG:" << cus.GetName() << endl;
    cout << "Phuong thuc thanh toan:" << pMethod << setw(30) << "Thanh tien:" << GetCost() << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl;
}

istream& operator>>(istream& i, Bill& b)
{
    cout << "Nhap ID:"; i >> b.bID;
    int lc;
    while (1)
    {
        cout << "1.Nhap them san pham" << endl;
        cout << "2.Thoat." << endl;
        cout << "Nhap lua chon:"; cin >> lc;
        if (lc == 1)
        {
            Purchase pur;
            cin>>pur;
            b.AddPurchase(pur);
        }
        if (lc == 2)
        {
            break;
        }
    }
    cout << "----------KHACH MUA HANG-------"<<endl; i >> b.cus;
    fflush(stdin);
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Phuong thuc thanh toan:"; getline(i, b.pMethod);
    fflush(stdin);
    return i;
}


int Bill::GetID()
{
    return this->bID;
}

void Bill::Update(const int& m)
{
    if (this->bID == m)
    {
        cout << "Nhap lai ID:"; cin >> bID;
        fflush(stdin);
        cout << "------Nhap lai thong tin khach hang--------------" << endl;
        cin >> cus;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Nhap lai phuong thuc thanh toan:"; getline(cin, pMethod);
    }
}


Date Bill::GetDate()
{
    return date.GetDate();
}

//Purchase& Bill::operator[](const int& index)
//{
//    static Purchase NGU;
//    return (index >= 0 && index < this->size) ? *(this->p + index) : NGU;
//}

