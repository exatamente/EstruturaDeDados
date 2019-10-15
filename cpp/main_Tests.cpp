#include <iostream>
#include <string>
#include ".\..\headers\Stock.h"
#include ".\..\headers\IStock.h"
#include ".\..\headers\Hash.h"

/*
	MAIN PARA REALIZARMOS TESTES NAS CLASSES
*/
int main()
{

	Hash h(10);
	

	Stock peixe(Stock::Stack, "stockpeixe", 50); // Estoque de "peixes" utilizando Arvore com capacidade para 50 unidades
	//Stock coisas(Stock::List, "genericos", 5);
	//// podemos utilizar uma estrutura para guardar todos os estoques de produtos

	h.Add("Peixes", &peixe);
	//h.Add("genericos", &coisas);

	std::cout << h.Contain("Peixes") << std::endl;

	Stock x = h.Get("Peixes");
	std::cout << x.getName() << std::endl;

	system("pause");
	return 0;
}