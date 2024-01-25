#pragma once
#include <iostream>
#include <string>
using namespace std;

class Drinks

{
public:
	Drinks(string, double, int, string);
	void setName(string);
	string getName();
	void setPrice(double);
	double getPrice();
	void setQuantity(int);
	int getQuantity();
	void setType(string);
	string getType();

private:
	string name;
	double price;
	int quantity;
	string type;
};

