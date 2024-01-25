#include "NoAlcoholic.h"

NoAlcoholic::NoAlcoholic(string& name, double& price, int& quantity, string& type, double liters, double cityTax) :
	Drinks (name, price, quantity, type)
{
	setLiters(liters);
	setCityTax(cityTax);
	
}

void NoAlcoholic::setLiters(double)
{
	this->liters = liters;
}

double NoAlcoholic::getLiters()
{
	this->liters;
}

void NoAlcoholic::setCityTax(double)
{
	this->cityTax = cityTax;
}

double NoAlcoholic::getCityTax()
{
	this->cityTax;
}

double NoAlcoholic::calculateNoAlcPrice()
{
	return getQuantity() * getPrice() + getCityTax()
}

//Quantity* Price + CityTax
