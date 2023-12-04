#include "Bill.h"

Bill::Bill()
{}

Bill::Bill(int ID, Customer c, string p)
{
    this->bID = ID;
    //a = NULL;
    this->cus = c;
    this->pMethod = p;
}

Bill::~Bill()
{}

bool Bill::operator==(const Bill& b)
{
    return (this->bID == b.bID);
}

float Bill::GetCost() const 
{
    float cost = 0;
    Node<Purchase>* tmp = a.GetHead();
    while (tmp != NULL)
    {
        cost += tmp->GetData().Calculate();
        tmp = tmp->GetNext();
    }
    return cost;
}

Purchase* Bill::CreateP(const Product& p, const int& m)
{
    Purchase* tmp = new Purchase(p, m);
    return tmp;
}

void Bill::AddPurchase(const Product& prod, const int& quantity)
{
    Purchase newPurchase(prod, quantity);
    a.AddLast(newPurchase);
}

void Bill::Show()
{
    bool found = false;
    //Node<Purchase>* tmp = a.GetHead();
    Date date;
    Date currentDate = date.GetDate();
    a.Display();
  /*  while (tmp != NULL)
    {
        tmp->GetData().Show();
        tmp = tmp->GetNext();
        found = true;
    }
    if (!found)
    {
        cout << "Khong co san pham nao duoc mua!" << endl;
        exit(0);
    }*/
    cout << "Ngay ra hoa don: ";
    currentDate.Show();
    cout << "Ma khach hang:" << cus.GetID() << setw(30) << "Ten khach hang :" << cus.GetName() << endl;
    cout << "Phuong thuc thanh toan:" << this->pMethod << setw(30) << "Thanh tien:" << GetCost() << endl;
}

istream& operator>>(istream& i, Bill& b)
{
    //cout << "Nhap ID:"; i >> b.bID;
    int lc;
    while (1)
    {
        cout << "1.Nhap them san pham" << endl;
        cout << "2.Thoat." << endl;
        cout << "Nhap lua chon:"; cin >> lc;
        if (lc == 1)
        {
            Product p;
            int n;
            i >> p;
            cout << "So luong :"; i >> n;
            Purchase* newPur = b.CreateP(p, n);
            b.a.AddLast(*newPur);
            //b.AddPurchase(p, n);
        }
        if (lc == 2)
        {
            break;
        }
    }
    /*cout << "----------KHACH MUA HANG-------"<<endl; i >> b.cus;
    fflush(stdin);
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Phuong thuc thanh toan:"; getline(i, b.pMethod);
    fflush(stdin);*/
    return i;
}

ostream& operator<<(ostream& o, const Bill& b)
{
    o << "Ma hoa don: " << b.bID << endl;
    o << "-----Cac san pham da mua-----" << endl;
    Node<Purchase>* tmp = b.a.GetHead();
    while (tmp != NULL) {
        o << tmp->GetData();
        tmp = tmp->GetNext();
    }
    o << "-----------------------------" << endl;
    o << "Ngay ra hoa don: " << b.date << endl;
    o << "Khach hang: " << b.cus << endl;
    o << "Phuong thuc thanh toan: " << b.pMethod << endl;
    o << "Thanh tien: " << b.GetCost() << endl;
    return o;
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