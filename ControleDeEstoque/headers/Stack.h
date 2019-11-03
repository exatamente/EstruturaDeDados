#pragma once
#include <string>
#include <iomanip>
#include <iostream>
#include "IStructure.h"
#include "NoProduto.h"

class Stack : public IStructure
{
private:
	NoProduto* topo;
	NoProduto* inicio;
	int n;

public:
	Stack();
	bool Add(Product* valor) override;
	int InStock() override;
	Product Remove(bool *ok = NULL) override;
	bool Contain(unsigned int id) override;
    Product get(std::string) override;
	void Print() override;
};
