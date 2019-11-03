#pragma once
#include <iostream>

class Product
{
private:
	unsigned int id;
	std::string name;
	double price;
public:
	Product();
	Product(std::string, double, unsigned int);
	const bool operator== (unsigned int id)
	{
		return (this->id == id);
	}

	std::string getName();
	double getPrice();
	unsigned int getId();
	bool setPrice(double);

	friend class Stock;
};