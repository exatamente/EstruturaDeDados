#pragma once
#include "IStructure.h"
#include "NoProduto.h"

class Stack : public IStructure
{
private:
	NoProduto* topo;
	int n;

public:
	Stack()
	{
		topo = NULL;
		n = 0;
	}


	bool Add(Product* valor)
	{
		NoProduto* novo = new NoProduto;
		Stack* p = new Stack;

		novo->valor = valor;
		novo->prox = NULL;

		p->topo = novo;


		n++;
		return true;
		delete novo;
		delete p;
	}

	Product Remove(bool *ok = NULL)
	{
		NoProduto* novo = new NoProduto;
		Stack* p = new Stack;
		novo->prox = NULL;

		n--;
		return *(p->topo->valor);
		delete novo;
		delete p;
	}

};