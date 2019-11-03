#pragma once
#include "NoStock.h"

class LDE
{
private:
	NoStock* primeiro;
	int n;
	NoStock sentinela;
	void limpa();

	void copia(const LDE& other)
	{
		NoStock* current = other.primeiro;
		if (primeiro)
			limpa();
		while (current)
		{
			Insere(current->stock);
			current = current->next;
        }
	}

public:
	LDE();
	LDE(const LDE& outra)
	{
		copia(outra);
	}

    Stock &operator[](int idx)
    {
        NoStock* current = primeiro;
        for (int i=0; i != idx; i++) current = current->next;
        return *(current->stock);
    }

	void Insere(Stock* stock);
	bool Remove(int idx);
	void Imprime();
    int GetN();
    void Atualiza(std::string deletar = "");


	~LDE();
};
