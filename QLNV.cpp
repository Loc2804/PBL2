#include "QLNV.h"
#include <string>
QLNV::QLNV()
{
    this->n=0;
    this->p=NULL;
}

QLNV::~QLNV()
{
    delete[] this->p;
}

ostream& operator<<(ostream& o, const QLNV& q)
{
    for(int i=0; i< q.n; i++)
    o<< *(q.p+i);
    return o;
}

Employee& QLNV::operator[](const int& index)
{
    static Employee NGU;
    return (index >=0 && index < this->n)? *(this->p+index) : NGU;
}

void QLNV::Add(const Employee& e)
{
    if(this->n==0)
    {
        this->p=new Employee[this->n+1];
        *(this->p + this->n)=e;
    }
    else
    {
        Employee *tmp= new Employee[this->n];
        for(int i=0; i< this->n; i++)
        {
            tmp[i]=*(this->p+i);
        }
        delete [] this->p;
        this->p=new Employee[this->n+1];
        for(int i=0; i<this->n; i++)
        {
            *(this->p+i)=tmp[i];
        }
        *(this->p + this->n)=e;
        delete[] tmp;
    }
    this->n++;
}

void QLNV::Input(const int& m)
{
    this->p=new Employee[m];
    for(int i=0; i<m; i++)
    cin>> *(this->p+i);
    this->n += m;
}

int QLNV::GetNum()
{
    return this->n;
}

int QLNV::IndexOf(const Employee& e)
{
    int index=-1;
    for(int i=0; i< this->n;i++)
    {
        if((*this)[i]==e)
        {
            index=i;
            break;
        }  
    }
    return index;
}

void QLNV::RemoveAt(const int& index)
{
    if(index>=0 && index<this->n)
    {
        if(this->n==1)
        {
            this->p=NULL;
            this->n=0;
        }
        else
        {
            Employee *tmp=new Employee[this->n-1];
            for(int i=0; i<index; i++)
            {
                tmp[i]=*(this->p+i);
            }
            for(int i=index+1; i< this->n; i++)
            {
                tmp[i]=*(this->p+i);
            }
            delete [] this->p;
            this->p=new Employee[this->n-1];
            for(int i=0; i<this->n-1; i++)
            {
                *(this->p+i)=tmp[i];
            }
            delete [] tmp;
         }
    }
    else cout << "Khong co vi tri thoa man!"<<endl;
    this->n--;
}

void QLNV::Remove(const Employee& e)
{
    if(IndexOf(e)>=0) RemoveAt(IndexOf(e));
}

void QLNV::Find(const int& m)
{
    bool found = false;
    for (int i = 0; i < this->n; i++)
    {
        if (p[i].GetID() == m)
        {
            cout << p[i];
            found = true;
        }
    }
    if (found == false) 
    {
        cout << "Khong tim thay thong tin!" << endl;
    }
}

 void QLNV::Update(const int& ID)
 {
    int index;
    Employee e;
    for (int i = 0; i < this->n; i++)
    {
        if (p[i].GetID() == ID)
        {
            cout << "----Nhap lai thong tin can thiet---------" << endl;
            index = i;
            cin >> e;
        }
    }
    p[index] = e;
 }