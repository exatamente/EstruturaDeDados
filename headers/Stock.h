#pragma once
#include <string>
#include <iostream>
#include "./IStock.h"
#include "./IStructure.h"
#include "./Product.h"
#include "./Stack.h"

class Stock : IStock
{
public:
	/* Atributes */
	enum Structure : unsigned char // enum eh um data type e nao um data structure, entao suponho que estamos liberados para utilizar
	{
		StructureQueue, StructureStack // pode adicionar qualquer nome
	};
	IStructure* inStock; // estrutura que vai guardar os produtos
private:
	int cap; // capacidade do estoque (tamanho maximo)
	std::string name;
	double price; // preco do estoque inteiro
	int qtt; // quantidade de itens em estoque

	/* Methods */
public:
	/* Constructor / Destructor */
	Stock(Structure, std::string, int);
	Stock();
	~Stock();

	const bool& operator== (Stock other)
	{
		return this->name.compare(other.name);
	}

	/* General purpose methods */
	bool Contain(unsigned int);
	bool Add(Product*);
	Product Remove(bool&);
	void Print();

	/* Inherited via IStock */
	virtual int getCap() override;
	virtual std::string getName() override;
	virtual double getPrice() override;
	virtual int getQtt() override;
	virtual bool setCap(int) override;
	virtual bool setPrice(float) override;
};
