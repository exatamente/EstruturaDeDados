#include <iostream>
#include ".\..\headers\Stock.h"
#include ".\..\headers\IStock.h"


/*
	MAIN PARA REALIZARMOS TESTES NAS CLASSES
*/
int main()
{
	Stock peixe(Stock::Hash, "peixe", 50); // Estoque de "peixes" utilizando Arvore com capacidade para 50 unidades
	Stock coisas(Stock::List, "coisas", 5);
	// podemos utilizar uma estrutura para guardar todos os estoques de produtos


	system("pause");
	return 0;
}