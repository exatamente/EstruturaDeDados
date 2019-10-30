#include "..\headers\FilaCircular.h"


FilaCircular::FilaCircular(int maximo)
{
	v = new Product*[maximo + 1];
	i = f = 0;
	max = maximo + 1;
}

FilaCircular::~FilaCircular()
{
	delete[] v;
}

bool FilaCircular::Add(Product * valor)
{
	if ((f + 1) % max == i)
		return false;

	v[f] = valor;

	f = (f + 1) % max;
	return true;
}

int FilaCircular::InStock()
{
	int aux, cont=0;
	for (aux = i; aux != f; aux = (aux + 1) % max) cont++;
	return cont;
}

void FilaCircular::Print()
{
	int aux;
	std::cout << "<< QUEUE >> " << std::endl;
	for (aux = i; aux != f; aux = (aux + 1) % max)
	{
		std::cout << v[aux]->getId() << ": " << v[aux]->getName() << "[R$" << std::setprecision(2) << v[aux]->getPrice() << "]" << std::endl;
	}
	std::cout << std::endl;
}

bool FilaCircular::Contain(unsigned int id)
{
	int aux;
	for (aux = i; aux != f; aux = (aux + 1) % max)
	{
		if (*v[aux] == id) return true;
	}
	return false;
}

Product FilaCircular::Remove(bool * ok)
{
	if (i == f)
	{
		if (ok)
		{
			*ok = false;
		}
		return *v[i];
	}

	Product temp = *v[i];
	i = (i + 1) % max;
	if (ok)
		*ok = true;
	return temp;
}
