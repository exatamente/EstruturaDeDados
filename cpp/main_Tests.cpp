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

	Hash estoques(10);

	Stock peixe(Stock::StructureStack, "Pescados", 50); // Estoque de "peixes" utilizando Arvore com capacidade para 50 unidades
	estoques.Add(peixe); // adicionando o estoque de peixes com o nome de "Peixes"
	std::cout << estoques.Contain("Pescados") << std::endl;
	
	Stock paes(Stock::StructureQueue, "Padaria", 1000);
	estoques.Add(paes);
	std::cout << estoques.Contain("Padaria") << std::endl;

	Stock carnes(Stock::StructureStack, "Acougue", 500);
	estoques.Add(carnes);
	
	//estoques.Remove("Peixes");
	Stock x = estoques.Get("Pescados");
	x.Print();
	std::cout << x.getName() << std::endl << std::endl;
	Stock y = estoques.Get("Padaria");
	y.Add(new Product("brioche", 5.30, 1));
	y.Print();
	std::cout << y.getName() << std::endl << std::endl;
	Stock z = estoques.Get("Acougue");
	std::cout << z.getName() << std::endl << std::endl;

	estoques.Print();

	system("pause");
	return 0;
}