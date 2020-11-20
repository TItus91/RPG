#include "Inventory.h"
#include <iostream>

Inventory::Inventory()
{

}

Inventory::~Inventory()
{

}

void Inventory::ListItems(Inventory& inv)
{
	for (std::vector<IItem*>::iterator i = inv.Items.begin(); i<inv.Items.end(); i++) 
	{
		std::cout << *i << std::endl;
	}
}

void Inventory::DropItem(std::vector<IItem*> inv, std::vector<IItem*>::iterator it)
{
	inv.erase(it);
}

void Inventory::AddItem(IItem* item)
{
	this->Items.push_back(item);
}