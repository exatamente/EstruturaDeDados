#include ".\..\headers\Stack.h"

Stack::Stack()
{
	topo = NULL;
	inicio = NULL;
	n = 0;
}

bool Stack::Add(Product * valor)
{
	NoProduto* novo = new NoProduto;
	
	if (!inicio) inicio = novo;
	if (topo) topo->prox = novo;

	novo->valor = valor;
	novo->prox = NULL;

	topo = novo;


	n++;
	return true;
}

int Stack::InStock()
{
	return (n-1);
}

Product Stack::Remove(bool * ok)
{
	NoProduto* current = inicio;
	NoProduto* prev = NULL;
	if (!current)
	{
		if (ok) *ok = false;
		Product p;
		return p;
	}
	while (current->prox)
	{
		prev = current;
		current = current->prox;
	}
	topo = prev;
	if (prev) prev->prox = NULL;
	else inicio = NULL;
	if (current)
	{
		if (ok) *ok = true;
		Product valor = *(current->valor);
		delete current;
		n--;
		return valor;
	}
	else
	{
        if (ok) *ok = false;
		Product p;
		return p;
	}
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

Product Stack::get(std::string name)
{
    NoProduto* current = topo;
    while (current)
    {
        if (current->valor->getName().compare(name) == 0)
        {
            return *(current->valor);
        }
        current = current->prox;
    }
    Product p;
    return p;
}

void Stack::Print()
{
	NoProduto* current = inicio;
	std::cout << "<< STACK >> " << std::endl;
	while (current)
	{
		std::cout.precision(2);
		std::cout << std::fixed;
		std::cout << current->valor->getName() << "(" << current->valor->getId() << "): " << current->valor->getName() << "[R$" << current->valor->getPrice() << "]" << std::endl;
		current = current->prox;
	} std::cout << std::endl;
}
