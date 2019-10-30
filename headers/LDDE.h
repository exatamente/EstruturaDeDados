#pragma once
#include "IStructure.h"
#include "No.h"

class LDDE
{
private:
	No* first;
	No* last;
	int n;
	Stock sentinela;

public:
	LDDE();

	// Deixe para o fim (deve copiar as listas)
	LDDE(const LDDE&);

	// Este operador faz a cópia da lista em caso de atribuições
	LDDE& operator= (const LDDE& other)
	{
		// reset the whole ldde
		while (Remove(0));
		n = 0;
		// aux variable
		No* current = other.first;
		// copies the other list element by element
		while (current)
		{
			Insere(current->stock);
			current = current->next;
		}
		return *this;
	}

	bool Insere(Stock*);

	/* Returns the index of the first node with value == "valor", otherwise -1 */
	int Busca(std::string);
	Stock& Get(std::string);

	bool Remove(int);
	void Print();

	const Stock& operator[] (int idx)
	{
		// check if idx fits on the ldde
		if (idx < 0 || idx > n)
			return sentinela;
		// aux variable
		No* current = first;
		// finds the node with the corresponding index
		for (int i = 0; i < idx; i++)
		{
			current = current->next;
		}
		return *(current->stock);
	}

	~LDDE();
};