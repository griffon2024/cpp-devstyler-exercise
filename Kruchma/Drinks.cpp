#include "Drinks.h"

Drinks::Drinks(string name, double price, int quantity, string type)
{
	setName(name);
	setPrice(price);
	setQuantity(quantity);
	setType(type);
}

void Drinks::setName(string)
{
	this->name = name;
}

string Drinks::getName()
{
	return this->name;
}

void Drinks::setPrice(double)
{
	this->price = price;
}

double Drinks::getPrice()
{
	return this->price;
}

void Drinks::setQuantity(int)
{
	this->quantity = quantity;
}

int Drinks::getQuantity()
{
	return this->quantity;
}

void Drinks::setType(string)
{
	this->type = type;
}

string Drinks::getType()
{
	return this->type;
}
