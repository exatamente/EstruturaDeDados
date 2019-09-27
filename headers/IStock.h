#pragma once
#include <iostream>

class IStock
{
public:
	/* obligatory getters */
	virtual int getCap() = 0;
	virtual std::string getName() = 0; // nome do produto armazenado
	virtual float getPrice() = 0; // preco total do lote
	virtual int getQtt() = 0; // quantidade em estoque
	/* obligatory setters */
	virtual bool setCap(int) = 0;
	virtual bool setPrice(float) = 0; // ajusta o preço (verificar se nao e negativo)
	virtual bool setQtt(int) = 0; // ajusta quantidade no lote (nao pode ficar negativa)
	/* virtual destructor */
	virtual ~IStock() {};
};