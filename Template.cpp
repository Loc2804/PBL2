#include "Template.h"

template<typename T>
void Node<T>::SetNext(Node<T>* next)
{
    this->next = next;
}

template<typename T>
LinkedList<T>::LinkedList() 
{
    head = NULL;
}

//template<typename T>
//LinkedList<T>* LinkedList<T>::instance = NULL;
//
//template<typename T> 
// LinkedList<T>* LinkedList<T>::GetInstance()
//{
//    if (instance == NULL)
//    {
//        instance = new LinkedList();
//    }
//    return instance;
//}

template<typename T>
LinkedList<T>::~LinkedList()
{
    while (head != NULL)
    {
        Node<T>* tmp = head;
        head = head->next;
        delete tmp;
    }
}

template<typename T>
Node<T>* LinkedList<T>::GetHead() const
{
    return head;
}

template<typename T>
Node<T>* LinkedList<T>::CreateNode(const T& data)
{
    Node<T>* tmp=new Node<T>(data);
    return tmp;
}

template<typename T>
void LinkedList<T>::Display()
{
    Node<T>* tmp=head;
    while(tmp!=NULL)
    {
        tmp->data.Show();
        tmp=tmp->next;
    }
}

template<typename T>
void LinkedList<T>::AddLast(const T& data)
{
    Node<T>* tmp=CreateNode(data);
    if(head==NULL)
    {
        head=tmp;
    }
    else
    {
        Node<T>* p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=tmp;
    }
}

template<typename T>
void LinkedList<T>::Findinf(const int& t)
{
    bool found = false;
    Node<T>* tmp= head;
    while(tmp->next!=NULL)
    {
        if(tmp->data.GetID() == t)
        {
            tmp->data.Show();
            found = true;
        }
        tmp=tmp->next;
    }
    if (!found)
    {
        cout << "Khong tim thay thong tin!" << endl;
    }
}

template<typename T>
int LinkedList<T>::IndexOf(const T& t)
{
    Node<T>* tmp=head;
    int index=-1;
    int i=0;
    while(tmp!=NULL)
    {
        if(tmp->data==t)
        {
            index=i;
            break;
        }
        i++;
        tmp=tmp->next;
    }
    return index;
}

template<typename T>
void LinkedList<T>::Delete(const int& m)
{
    Node<T>* tmp=head;
    Node<T>* pre=NULL;
    while(tmp!=NULL && tmp->data.GetID() !=m)
    {
        pre=tmp;
        tmp=tmp->next;
    }
    if(tmp==NULL)
    {
        cout<<"Khong tim thay thong tin can xoa!"<<endl;
    }
    if(pre!=NULL)
    {
        pre->next=tmp->next;
    } 
    else
    {
        head=tmp->next;
    }
    delete tmp;
}

template<typename T>
void LinkedList<T>::DeleteAll()
{
    Node<T>* tmp=head;
    Node<T>* next;
    while(tmp!=NULL)
    {
        next=tmp->next;
        delete tmp;
        tmp=next;
    }
    head=NULL;
}

template<typename T>
void LinkedList<T>::Update(const int& m)
{
    T up;
    bool found = false;
    Node<T>* tmp = head;
    while (tmp != NULL)
    {
        if (tmp->GetData().GetID() == m)
        {
            cin >> up;
            tmp->data = up;
            found = true;
            break;
        }
        tmp = tmp->GetNext();
    }
    if (!found)
    {
        cout << "Khong tim thay thong tin!" << endl;
    }
}
