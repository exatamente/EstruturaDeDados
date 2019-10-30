#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "IStructure.h"
#include "Product.h"

class FilaCircular : public IStructure
{
private:
	Product** v;
	int max;
	int i;
	int f;

public:
	FilaCircular(int maximo);
	virtual ~FilaCircular();
	bool Add(Product* valor) override;
	int InStock() override;
	void Print() override;
	bool Contain(unsigned int);
	Product Remove(bool* ok = NULL) override;

	FilaCircular(const FilaCircular& other)
	{
		max = other.max;
		i = f = 0;
		v = new Product*[other.max];
		*this = other;
	}

	FilaCircular& operator= (const FilaCircular& other)
	{
		// limpa a fila
		bool ok;
		do
		{
			Remove(&ok);
		} while (ok);
		// copia other
		int aux;
		for (aux = other.i; aux != other.f; aux = (aux + 1) % other.max)
		{
			Add((other.v)[aux]);
		}
		// retorna a fila reconstruida
		return *this;
	}
};