#include "Alcoholic.h"

Alcoholic::Alcoholic(string& name, double& price, int& quantity, string& type, double volume, double tax)
{
    setVolume(volume);
    setTax(tax);
}

void Alcoholic::setVolume(double)
{
    this->volume = volume;
}

double Alcoholic::getVolume()
{
    return this->volume;
}

double Alcoholic::calculateAlcPrice()
{
    return getQuantity() * getPrice() * getTax();
}

void Alcoholic::setTax(double)
{
    this->tax = tax;
}

double Alcoholic::getTax()
{
    return this->tax;
}
