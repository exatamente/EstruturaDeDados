#pragma once
#include "Product.h"

/* TODA ESTRUTURA DEVERA IMPLEMENTAR ESTA INTERFACE */
class IStructure
{
public:
	virtual void Add(std::string, Product) = 0; // metodo de incluir
	virtual bool Remove(std::string) = 0; // metodo de remover
	virtual ~IStructure() = 0;
};