#pragma once
#include "Drinks.h"
class Alcoholic :
    public Drinks
{
    public:
        Alcoholic(string&, double&, int&, string&, double, double);
        void setVolume(double);
        double getVolume();
        void setTax(double);
        double getTax();
        double calculateAlcPrice();
        
   private:
       double volume;
       double tax;

}

