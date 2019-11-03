#pragma once
#include <string>
#include <iostream>
#include "./IStructure.h"
#include "./Product.h"
#include <headers/FilaCircular.h>
#include "./Stack.h"

class Stock
{
public:
	/* Atributes */
	enum Structure : unsigned char // enum eh um data type e nao um data structure, entao suponho que estamos liberados para utilizar
	{
		StructureQueue, StructureStack // pode adicionar qualquer nome
	};
	enum StockLevel : unsigned char
	{
		StockLevelCritic, StockLevelLimit, StockLevelWarning, StockLevelGood
	};
	IStructure* inStock; // estrutura que vai guardar os produtos
private:
	int cap; // capacidade do estoque (tamanho maximo)
	std::string name;
	double price; // preco do estoque inteiro
	int qtt; // quantidade de itens em estoque
	int min; // quantidade minima em estoque
    Structure structure;

	/* Methods */
public:
	/* Constructor / Destructor */
	Stock(Structure, std::string, int, int);
	Stock();
    ~Stock();

    bool operator== (Stock other)
	{
		return this->name.compare(other.name);
	}

	/* General purpose methods */
	bool Contain(unsigned int);
	bool Add(Product*);
	Product Remove(bool&);
	void Print();
    int getMin();
    Product get(std::string);
    Structure getStructure();
	StockLevel getStockLevel();

	/* Inherited via IStock */
    int getCap();
    std::string getName();
    double getPrice();
    int getQtt();
    bool setPrice(float);
};
