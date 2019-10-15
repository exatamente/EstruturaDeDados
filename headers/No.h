#pragma once
#include "Stock.h"

class No
{
public:
	Stock* stock;
	std::string key;
	No* next;
	No* prev;
};