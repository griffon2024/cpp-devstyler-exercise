#include "User.h"

User::User(string)
{
    setUsername(username);
}

void User::setUsername(string)
{
    this->username = username;
}

string User::getUsername()
{
    return this->username;
}

void User::addOrder(Order o)
