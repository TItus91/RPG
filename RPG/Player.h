#pragma once
#include "Boots.h"
#include "Helm.h"
#include "Hammer.h"
#include <vector>
#include <iostream>
#include "Inventory.h"

class Player
{
	friend class Inventory;
public:
	Player();
	Player(int att, int crit, int bootdef, int helmdef, int xp, int lvl, int hp);
	~Player();


	IWeapon* Weapon_;
	Boots* Boots_;
	Helm* Helm_;

	int MaxHp;
	int ActualHp;
	int Level;
	int Xp;
	Inventory MyInventory;
	

	//std::vector <IItem*> Inventory;

	void Equip(IItem*);
	void Attack(Player&);
	int GetMaxHp();
	int GetHp();
	int GetDefece();
	void GetExperience(int);
	void LevelUp();
	
};

