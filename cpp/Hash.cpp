#include ".\..\headers\Hash.h"

Hash::Hash(int size)
{
	this->size = size;
	hashTable = new LDDE[size];
}


Hash::~Hash()
{
	std::cout << "deletando hashTable:" << std::endl;
	delete[] hashTable;
}


void Hash::Add(Stock* value)
{
	std::string key = value->getName();
	int idx = HashFunction(key, size);
	hashTable[idx].Insere(value);
}

Stock& Hash::Get(std::string key)
{
	int idx = HashFunction(key, size); 
	return hashTable[idx].Get(key);
}

void Hash::Print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << i << " - ";
		hashTable[i].Print();
	}
}

bool Hash::Contain(std::string key)
{
	int idx = HashFunction(key, size);
	return (hashTable[idx].Busca(key) < 0) ? false : true;
}

int Hash::HashFunction(std::string x, int size)
{
	return x.at(0) % size;
}

bool Hash::Remove(std::string key)
{
	int idx = HashFunction(key, size);
	return hashTable[idx].Remove(hashTable[idx].Busca(key));
}
