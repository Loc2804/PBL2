#include "ManageUI.h"

void ManageUI::AddUser(const string& name, const string& pass)
{
    
    User* newUser= new User(name, pass);
    if(head==NULL) head=newUser;
    else
    {
        newUser->next=head;
        head=newUser; 
    }
}

bool ManageUI::Check(const string& name)
{
    User* tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->username==name) return true;
        tmp=tmp->next;
    }
    return false;
}

void ManageUI::ReadFromFile(const string& filename)
{
    ifstream file(filename);
    if (file.is_open())
    {
        string username, password;
        while(file >> username >> password)
        {
            AddUser(username, password);
        }
        file.close();
    }
}

void ManageUI::SaveToFile(const string& filename)
{
    ofstream file(filename)
    if (file.is_open())
    {
        User* tmp=head;
        while(tmp!=NULL)
        {
            file << tmp->username <<" "<< tmp-> password<<endl;
            tmp=tmp->next;
        }
        file.close();   
    }
}

bool ManageUI::LogIn(const string& name, const string& pass)
{
    User* tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->username==name && tmp->password==pass) return true;
        tmp=tmp->next;
    }
    return false;
}

