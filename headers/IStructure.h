#pragma once
#include "Product.h"

/* TODA ESTRUTURA DEVERA IMPLEMENTAR ESTA INTERFACE */
class IStructure
{
public:
	virtual bool Add(Product*) = 0; // metodo de incluir
	virtual Product Remove(bool*) = 0; // metodo de remover
	virtual ~IStructure() {};
};