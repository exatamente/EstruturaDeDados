#include ".\..\headers\Stock.h"

/* Constructor */
Stock::Stock(Structure s, std::string _name, int _cap, int _min) : name(_name)
{
	cap = (_cap > 0) ? _cap : 0;
	min = (_min > 0) ? _min : 0;
    structure = s;
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
	}

	// zerando as variaveis de preco e itens em estoque
	qtt = 0;
	price = 0;
}

Stock::StockLevel Stock::getStockLevel()
{
	if (qtt < min) return Stock::StockLevelCritic; // abaixo do minimo
	else if (qtt == min) return Stock::StockLevelLimit; // no limite
    else if (qtt < 1.1*min) return Stock::StockLevelWarning; // 10% do minimo
	return Stock::StockLevelGood; // acima de 10% de folga
}

Stock::Stock()
{
    inStock = nullptr;
	name = "invalid";
	cap = -1;
	qtt = -1;
	price = -1;
}

/* Destructor */
Stock::~Stock()
{
	std::cout << "destruindo o estoque: " << name << std::endl;
    if (name.compare("invalid")==0){
        std::cout << "estoque invalido, não há ponteiros para deletar" << std::endl;
    } else {
        delete inStock;
    }
}

/* General purpose methods */
bool Stock::Add(Product* p)
{
    if (qtt >= cap || name.compare("invalid") == 0) return false;
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

int Stock::getMin()
{
    return min;
}

Product Stock::get(std::string name)
{
    return inStock->get(name);
}

Stock::Structure Stock::getStructure()
{
    return structure;
}

int Stock::getCap()
{
	return cap;
}
