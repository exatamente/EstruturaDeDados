#include ".\..\headers\Stack.h"

Stack::Stack()
{
	topo = NULL;
	n = 0;
}

bool Stack::Add(Product * valor)
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

int Stack::InStock()
{
	NoProduto* current = topo;
	int cont = 0;
	while (current)
	{
		cont++;
		current = current->prox;
	}
	return cont;
}

Product Stack::Remove(bool * ok)
{
	NoProduto* novo = new NoProduto;
	Stack* p = new Stack;
	novo->prox = NULL;

	n--;
	return *(p->topo->valor);
	delete novo;
	delete p;
}

bool Stack::Contain(unsigned int id)
{
	NoProduto* current = topo;
	while (current)
	{
		if (*(current->valor) == id)
		{
			return true;
		}
		current = current->prox;
	}
	return false;
}

void Stack::Print()
{
	NoProduto* current = topo;
	std::cout << "<< STACK >> " << std::endl;
	while (current)
	{
		std::cout << current->valor->getId() << ": " << current->valor->getName() << "[R$" << std::setprecision(2) << current->valor->getPrice() << "]" << std::endl;
	} std::cout << std::endl;
}
