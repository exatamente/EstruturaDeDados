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
	

	Stock peixe(Stock::StructureStack, "stockpeixe", 50); // Estoque de "peixes" utilizando Arvore com capacidade para 50 unidades
	estoques.Add(peixe.getName(), &peixe);
	std::cout << estoques.Contain("stockpeixe") << std::endl;
	
	Stock paes(Stock::StructureStack, "stockpaes", 1000);
	estoques.Add(paes.getName(), &paes);
	std::cout << estoques.Contain("stockpaes") << std::endl;

	Stock carnes(Stock::StructureStack, "stockcarnes", 500);
	estoques.Add(carnes.getName(), &carnes);
	
	//estoques.Remove("Peixes");
	Stock x = estoques.Get("stockpeixe");
	std::cout << x.getName() << std::endl;
	x = estoques.Get("stockpaes");
	std::cout << x.getName() << std::endl;
	x = estoques.Get("stockcarnes");
	std::cout << x.getName() << std::endl;

	//h.Add("genericos", &coisas);



	system("pause");
	return 0;
}