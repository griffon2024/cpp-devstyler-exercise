#pragma once
#include "Drinks.h"
class NoAlcoholic :
    public Drinks
{
public:
    NoAlcoholic(string&, double&, int&, string&, double, double);
    void setLiters(double);
    double getLiters();
    void setCityTax(double);
    double getCityTax();
    double calculateNoAlcPrice();

private:
    double liters;
    double cityTax;
    
};

