#include "User.h"

User::User(string u, string p)
{
    this->username=u;
    this->password=p;
    next=NULL;
}

User::~User() {}

