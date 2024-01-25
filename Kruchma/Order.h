#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Drinks.h"
using namespace std;

class Order
{
public:
	Order(string);
	void setDrink(string);
	void addDrink(Drinks*);
	void print();


private:
	string orderName;
	int number;
	static int numberOfOrders;
	vector <Drinks*> drinks;
}

