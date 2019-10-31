#include ".\..\headers\Stock.h"
#include ".\..\headers\FilaCircular.h"

/* Constructor */
Stock::Stock(Structure s, std::string _name, int _cap) : name(_name), cap(_cap)
{
	// Escolhendo a estrutura para ser instanciada
	// s = estrutura utilizada para armazenar;
	switch (s)
	{
		case StructureQueue:
			//std::cout << "queue" << std::endl;
			inStock = new FilaCircular(_cap);
			break;
		case StructureStack:
			//std::cout << "Stack" << std::endl;
			inStock = new Stack;
			break;
		default:
			std::cout << "Internal error during instanciation... invalid structure" << std::endl;
			break;
	}

	// zerando as variaveis de preco e itens em estoque
	qtt = 0;
	price = 0;
}

Stock::Stock()
{
	name = "invalid";
	cap = -1;
	qtt = -1;
	price = -1;
}

/* Destructor */
Stock::~Stock()
{
	std::cout << "destruindo o estoque: " << name << std::endl;
	//delete inStock;
}

/* General purpose methods */
bool Stock::Add(Product* p)
{
	if (qtt >= cap) return false;
	inStock->Add(p);
	qtt++;
	price += p->getPrice();
	return true;
}

Product Stock::Remove(bool& ok)
{
	Product p = inStock->Remove(&ok);
	if (ok)
	{
		price -= p.getPrice();
		qtt--;
	}
	return p;
}

bool Stock::Contain(unsigned int id)
{
	return inStock->Contain(id);
}

void Stock::Print()
{
	inStock->Print();
}

/* Getters */
std::string Stock::getName()
{
	return name;
}

double Stock::getPrice()
{
	return price;
}

int Stock::getQtt()
{
	return qtt;
}

/* Setters */
bool Stock::setPrice(float newPrice)
{
	if (newPrice >= 0)
	{
		price = newPrice;
		return true;
	}
	return false;
}

int Stock::getCap()
{
	return cap;
}

bool Stock::setCap(int newCap)
{
	// aqui vai depender da estrutura utilizada;
	return false;
}
