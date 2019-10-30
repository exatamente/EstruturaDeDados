#include ".\..\headers\Stock.h"

Product::Product() : name("invalid"), price(-1), id(-1) {}
Product::Product(std::string _name, double _price, unsigned int _id) : name(_name), price(_price), id(_id){}

std::string Product::getName() { return name; }
double Product::getPrice() { return price; }
unsigned int Product::getId() { return id; }
bool Product::setPrice(double newPrice)
{
	if (newPrice >= 0)
	{
		price = newPrice;
		return true;
	} 
	return false;
}