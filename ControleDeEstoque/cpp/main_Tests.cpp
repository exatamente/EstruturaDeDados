#include <iostream>
#include <string>
#include <iomanip>
#include ".\..\headers\Stock.h"
#include ".\..\headers\IStock.h"
#include ".\..\headers\Hash.h"
#include ".\..\headers\LDE.h"

void stockScreen(Stock& stock)
{
	int option;
	std::string name;
	double price;
	unsigned int id;
	while (true)
	{
		bool raiseError = false;

		std::cout << ">>> ESTOQUE DE " << stock.getName() << " <<<" << std::endl;
		std::cout << "0 - Voltar para a tela de controle de estoques;" << std::endl;
		std::cout << "1 - Adicionar produto;" << std::endl;
		std::cout << "2 - Remover produto;" << std::endl;
		std::cout << "3 - Imprimir estoques;" << std::endl;
		std::cout << "Op��o: "; std::cin >> option;
	
		switch (option)
		{
		case 0:
		{
			system("cls");
			return;
		}
		case 1:
		{
			std::cout << "Nome: "; std::cin >> name;
			std::cout << "Pre�o: "; std::cin >> price;
			std::cout << "N�mero de identifica��o (ID): "; std::cin >> id;
			raiseError = (price <= 0);
			if (raiseError)
			{
				std::cout << "Pre�o < 0, cancelando opera��o..." << std::endl << std::endl;
			}
			else
			{
				Product* p = new Product(name, price, id);
				if (stock.Add(p))
				{
					std::cout << std::endl << "*** Produto (" << name << " / Pre�o: " << price << " / ID: " << id << ") adicionado ao estoque " << stock.getName() << " com sucesso! ***" << std::endl << std::endl;
				}
				else
				{
					std::cout << std::endl << "*** Estoque Cheio... Opera��o cancelada ***" << std::endl << std::endl;
					delete p;
				}
			}
			break;
		}
		case 2:
		{
			bool ok;
			Product pCopy = stock.Remove(ok);
			std::cout.precision(2);
			std::cout << std::fixed;
			if (ok)
				std::cout << "Produto (" << pCopy.getName() << " / ID: " << pCopy.getId() << " / R$" << pCopy.getPrice() << ") removido com sucesso!" << std::endl << std::endl;
			else std::cout << "Estoque vazio, remo��o invalida" << std::endl << std::endl;
			break;
		}
		case 3:
		{
			std::cout.precision(2);
			std::cout << std::fixed;
			std::cout << std::endl << "Estoque " << stock.getName() << ": " << stock.getQtt() << "/" << stock.getCap() << " produtos, totalizando R$" << stock.getPrice() << std::endl;
			stock.Print();
			std::cout << std::endl << std::endl;
			break;
		}
		default:
		{
			std::cout << "Op��o invalida..." << std::endl;
			break;
		}
		}

		system("pause"); system("cls");
	}
}

void allStockScreen(Hash* warehouse)
{
	while (true)
	{
		LDE stocks;
		int option;
		std::cout << ">>>>>>>>>>>>><<<<<<<<<<<<<<" << std::endl;
		std::cout << ">>> CONTROLE DE ESTOQUE <<<" << std::endl;
		std::cout << ">>>>>>>>>>>>><<<<<<<<<<<<<<" << std::endl << std::endl;

		std::cout << "0 - Voltar para a tela de inicio;" << std::endl;
		std::cout << "1 - Criar novo Estoque;" << std::endl;
		std::cout << "2 - Manipular Estoque existente; " << std::endl;
		std::cout << "3 - Remover Estoque;" << std::endl;
		std::cout << "4 - Imprimir estrutura de estoques;" << std::endl;
		std::cout << "5 - Imprimir situa��o dos estoques;" << std::endl;
		std::cout << "Op��o: "; std::cin >> option;
		if (!std::cin.good())
		{
			std::cout << "ERROR: Comando invalido..." << std::endl << std::endl;
			system("pause");
		}
		else
		{
			bool raiseError = false;
			std::string name;
			int size;
			switch (option)
			{
			case 0:
				system("cls");
				return;
			case 1:
				int type;
				std::cout << "Fila (1) ou Pilha (2): "; std::cin >> type;
				if (type == 1 || type == 2)
				{
					std::cout << "Nome do estoque: "; std::cin >> name;
					std::cout << "Tamanho do estoque: "; std::cin >> size;
					Stock::Structure structure = (type == 1) ? Stock::StructureQueue : Stock::StructureStack;
					std::string stockType = (structure == Stock::StructureQueue) ? "Fila" : "Pilha";
					raiseError = (size < 1);

					if (raiseError)
					{
						std::cout << "Tamanho do estoque invalido..." << std::endl;
						system("pause");
					}
					else
					{
						std::cout << std::endl << "*** Estoque (" << name << " / Tamanho: " << size << " / Tipo: " << stockType << ") criado com sucesso! ***" << std::endl << std::endl;
						Stock* aux = new Stock(structure, name, size, size / 2);
						stocks.Insere(aux);
						warehouse->Add(aux);
						system("pause"); system("cls");
					}
		
				}
				else
				{
					std::cout << "Tipo de estoque invalido..." << std::endl;
					system("pause");
				}
				break;

			case 2:
				std::cout << "Nome do estoque: "; std::cin >> name;
				if (warehouse->Contain(name))
				{
					system("cls");
					stockScreen(warehouse->Get(name));
				}
				else
				{
					std::cout << "Estoque n�o encontrado" << std::endl << std::endl;
					system("pause"); system("cls");
				}
				break;
			case 3:
				std::cout << "Nome do estoque: "; std::cin >> name;
				if (warehouse->Contain(name))
				{
					warehouse->Remove(name);
					std::cout << "Remo��o realizada com sucesso!" << std::endl << std::endl;
					system("pause"); system("cls");
				}
				else
				{
					std::cout << "Estoque n�o encontrado" << std::endl << std::endl;
					system("pause"); system("cls");
				}
				break;
			case 4:
				std::cout << std::endl;
				warehouse->Print();
				std::cout << std::endl << std::endl;
				system("pause"); system("cls");
				break;
			case 5:
				stocks.Atualiza();
				stocks.Imprime();
				system("pause"); system("cls");
				break;
			default:
				std::cout << "Op��o invalida..." << std::endl;
				system("pause");
				break;
			}
		}
		system("cls");
	}
}

int main()
{
	// habilitando teclas pt-br
	setlocale(LC_ALL, "Portuguese");

	int option;
	Hash* warehouse;

	while (true)
	{
		std::cout << ">>>>>>>>>>><<<<<<<<<<<" << std::endl;
		std::cout << ">>> Tela de inicio <<<" << std::endl;
		std::cout << ">>>>>>>>>>><<<<<<<<<<<" << std::endl << std::endl;

		std::cout << "0 - Sair;" << std::endl;
		std::cout << "1 - Criar novo Armazem (grupo de estoques);" << std::endl;
		std::cout << "2 - Utilizar Armazem j� existente;" << std::endl;
		std::cout << "Op��o: "; std::cin >> option;

		switch (option)
		{
		case 0:
			std::cout << "Saindo..." << std::endl;
			system("pause");
			return 0;
		case 1:
			int size;
			std::cout << "Tamanho da Hash (tamanho padr�o = 26): "; std::cin >> size;
			size = (size <= 0) ? 26 : size;
			warehouse = new Hash( size );
			std::cout << std::endl << "*** Tamanho escolhido: " << size << " ***" << std::endl << std::endl;
			system("pause"); system("cls");
			allStockScreen(warehouse);
			break;
		case 2:
			// carregar
			warehouse = NULL;
			break;
		default:
			std::cout << "Op��o invalida..." << std::endl << std::endl;
			system("pause");
			break;
		}
		system("cls");
	}
}