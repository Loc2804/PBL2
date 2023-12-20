#pragma once
#include <iostream>

#include "Customer.h"
using namespace std;

template <typename T>
class Node
{
    public:
        T data;
        Node* next;
        Node(const T& data): data(data), next(NULL) {}
        ~Node(){}  
        void SetNext(Node<T>*);
        T GetData()
        { 
            return data; 
        }
        Node<T>* GetNext()
        { 
            return next;
        }
};

template <typename T>
class LinkedList
{
    private:
        Node<T>* head;
        //static LinkedList* instance;
    public:
        LinkedList();
        //static LinkedList* GetInstance();
        Node<T>* GetHead() const;
        ~LinkedList();
        Node<T>* CreateNode(const T&);
        void Display();
        void AddLast(const T&);
        void Findinf(const int&);
        int IndexOf(const T&);
        //void RemoveAt(const int&);
        void Delete(const int&);
        void DeleteAll();
        void Update(const int&);
}; 


