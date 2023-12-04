#include "User.h"
#include <fstream>

using namespace std;

class ManageUI
{
    private:
        User* head;
    public:
        ManageUI()
        {
            head=nullptr;
        }
        ~ManageUI()
        {
            User* tmp=head;
            while(tmp != NULL)
            {
                User* next=tmp->next;
                delete tmp;
                tmp=next;
            }
            head=NULL;
        }
        void AddUser(const string&, const string&);
        bool Check(const string&); //kiểm tra xem username tồn tại hay chưa
        void ReadFromFile(const string&);
        void SaveToFile(const string&);
        bool LogIn(const string&, const string&);
}