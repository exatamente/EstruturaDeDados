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


void Hash::Add(std::string key, Stock* value)
{
	int idx = HashFunction(key, size);
	hashTable[idx].Insere(value);
}

Stock& Hash::Get(std::string key)
{
	int idx = HashFunction(key, size); 
	return hashTable[idx].Get(key);
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

//void Hash::Print()
//{
//	for (int i = 0; i < size; i++)
//	{
//		hashTable[i].Print();
//	} std::cout << std::endl;
//}

bool Hash::Remove(std::string key)
{
	int idx = HashFunction(key, size);
	return hashTable[idx].Remove(hashTable[idx].Busca(key));
}
