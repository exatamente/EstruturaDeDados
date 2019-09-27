#pragma once

/* TODA ESTRUTURA DEVERA IMPLEMENTAR ESTA INTERFACE */
template <typename T>
class IStructure
{
public:
	virtual bool include() = 0; // metodo de incluir
	virtual T remove() = 0; // metodo de remover
	virtual ~IStructure() = 0;
};