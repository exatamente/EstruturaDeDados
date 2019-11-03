#include "./../headers/LDDE.h"

LDDE::LDDE()
{
    first = nullptr;
    last = nullptr;
	n = 0;
}

LDDE::LDDE(const LDDE & outra)
{
    first = nullptr;
    last = nullptr;
	*this = outra;
}

bool LDDE::Insere(Stock* s)
{
	No* current = first;
    No* prev = nullptr;
	No* new_node = new No;
    new_node->next = nullptr;
    new_node->prev = nullptr;
	new_node->stock = s;

	while (current)
	{
		prev = current;
		current = current->next;
	}
	if (prev)
		prev->next = new_node;
	else
		first = new_node;
	if (current)
		current->prev = new_node;
	else
		last = new_node;

	new_node->prev = prev;
	new_node->next = current;

	n++;
	return true;
}

/* Returns the index of the first node with value == "valor", otherwise -1 */

int LDDE::Busca(std::string key)
{
	No* current = first;
	for (int i = 0; i < n && current; i++)
	{
		if (!current->stock->getName().compare(key))
		{
			return i;
		}
		current = current->next;
	}
	return -1;
}

Stock* LDDE::Get(std::string key)
{
	No* current = first;
	for (int i = 0; i < n && current; i++)
	{
		if (!current->stock->getName().compare(key)) // compare retorna 0 (false) se forem iguais
		{
            return current->stock;
		}
		current = current->next;
	}
	std::cout << "nao encontrou..." << std::endl;
    return &sentinela;
}

bool LDDE::Remove(int idx)
{
	// check if idx fits in the ldde
    if (idx >= n || idx < 0)
	{
        std::cout << "cheguei aqui" << std::endl;
        return false;
	}
	// Aux variables
	No* current = first;
    No* prev = nullptr;
	// finds the node
    while (current && idx--)
	{
		prev = current;
		current = current->next;
	}
	// makes the new connections
	if (prev)
		prev->next = current->next;
	else
		first = current->next;
	if (current->next)
		current->next->prev = prev;
	else
		last = prev;

	// deletes the element
    delete current;

	// update ldde size
	n--;

	return true;
}

void LDDE::Print()
{
	No* current = first;
	while (current)
	{
		std::cout << current->stock->getName() << " ";
		current = current->next;
	} std::cout << std::endl;
}

LDDE::~LDDE()
{
	while (Remove(0));
}
