#pragma once
#include <vector>
#include "IItem.h"

class Inventory
{
	friend class IItem;

public:
	Inventory();
	~Inventory();
	
	std::vector<IItem*> Items;

	void ListItems(Inventory& inv);
	void DropItem(std::vector<IItem*> inv, std::vector<IItem*>::iterator it);
	void AddItem(IItem*);

};

