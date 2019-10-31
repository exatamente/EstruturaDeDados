#pragma once
#include <iostream>

class IStock
{
public:
	/* obligatory getters */
	virtual int getCap() = 0;
	virtual std::string getName() = 0; // nome do produto armazenado
	virtual double getPrice() = 0; // preco total do lote
	virtual int getQtt() = 0; // quantidade em estoque
	/* obligatory setters */
	virtual bool setCap(int) = 0;
	virtual bool setPrice(float) = 0; // ajusta o preço (verificar se nao e negativo)
	/* virtual destructor */
	virtual ~IStock() {};
};