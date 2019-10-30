#pragma once
#include <string>
#include <iomanip>
#include "IStructure.h"
#include "NoProduto.h"

class Stack : public IStructure
{
private:
	NoProduto* topo;
	int n;

public:
	Stack();
	bool Add(Product* valor) override;
	int InStock() override;
	Product Remove(bool *ok = NULL) override;
	bool Contain(unsigned int id) override;
	void Print() override;
};