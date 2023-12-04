#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

class User
{
    private:
        string username;
        string password;
        User* next;
    public:
        User(string="", string="");
        ~User();
}