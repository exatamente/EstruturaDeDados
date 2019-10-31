#pragma once
#include "IStructure.h"
#include "Stock.h"
#include "LDDE.h"

/* key = string, value = produto */
class Hash
{
private:
	/* Atributes */
	LDDE *hashTable;
	int size;
public:
	Hash(int);
	~Hash();

	bool Contain(std::string);
	int HashFunction(std::string, int);
	//void Print();

	void Add(Stock*);
	Stock& Get(std::string);
	void Print();
	bool Remove(std::string);
};

