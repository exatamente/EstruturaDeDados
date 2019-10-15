#pragma once
#include <iostream>

class Product
{
public:
	std::string name;
	const bool& operator== (Product other)
	{
		return this->name.compare(other.name);
	}
};