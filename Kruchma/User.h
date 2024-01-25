#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Order.h"
using namespace std;

class User
{
public:
	User(string);
	void setUsername(string);
	string getUsername();
	void print();
	void addOrder(Drinks*);


private:
	string username;
	vector<Drinks*> Drinks;

};

