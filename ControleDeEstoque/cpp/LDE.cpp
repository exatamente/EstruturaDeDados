#include "..\headers\LDE.h"

void LDE::limpa()
{
	while (Remove(0));
}

LDE::LDE()
{
	primeiro = nullptr;
	n = 0;
}

void LDE::Insere(Stock * stock)
{
	NoStock* novo = new NoStock;

	novo->stock = stock;
	novo->next = nullptr;

	NoStock* atual = primeiro;
	NoStock* anterior = nullptr;

	while (atual != nullptr && atual->stock->getStockLevel() < stock->getStockLevel())
	{
		anterior = atual;
		atual = atual->next;
	}

	if (anterior == nullptr)
		primeiro = novo;
	else
		anterior->next = novo;

	novo->next = atual;

	n++;
}

bool LDE::Remove(int idx)
{
	NoStock* atual = primeiro;
	NoStock* anterior = nullptr;


	if (idx < 0 || idx > n || !primeiro)
		return false;

	while (atual->next && idx--)
	{
		anterior = atual;
		atual = atual->next;
	}

	if (anterior)
		anterior->next = atual->next;
	else
		primeiro = atual->next;

	delete atual;

	n--;

	return true;
}

void LDE::Imprime()
{
	NoStock* current = primeiro;
	while (current)
	{
		Stock::StockLevel level = current->stock->getStockLevel();
		std::string levelString;
		if (level == Stock::StockLevelCritic) levelString = "*** Critico ***";
		else if (level == Stock::StockLevelLimit) levelString = "*** Limite ***";
		else if (level == Stock::StockLevelWarning) levelString = "*** Warning (<10%) ***";
		else if (level == Stock::StockLevelGood) levelString = "*** Good ***";
		std::cout << current->stock->getName() << " " << levelString << " - " << current->stock->getQtt() << "/" << current->stock->getCap() << std::endl;
		current = current->next;
    }std::cout << std::endl;
}

int LDE::GetN()
{
    return n;
}

void LDE::Atualiza(std::string deletar)
{
	LDE aux;
	NoStock* current = primeiro;
	while (current)
	{
        if (current->stock){
            if (current->stock->getName().compare(deletar)==0){
                delete current->stock;
            } else {
                aux.Insere(current->stock);
            }
        }
		current = current->next;
	}
	while (Remove(0));
	current = aux.primeiro;
	while (current)
	{
		Insere(current->stock);
		current = current->next;
	}
}

LDE::~LDE()
{
	limpa();
}
