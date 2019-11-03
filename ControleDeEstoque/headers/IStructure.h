#pragma once
#include "Product.h"

/* TODA ESTRUTURA DEVERA IMPLEMENTAR ESTA INTERFACE */
class IStructure
{
public:
	virtual bool Add(Product*) = 0; // metodo de incluir
	virtual int InStock() = 0;
	virtual Product Remove(bool*) = 0; // metodo de remover
	virtual bool Contain(unsigned int) = 0;
	virtual void Print() = 0;
    virtual Product get(std::string) = 0;
    virtual ~IStructure() {}
};
