#pragma once
class IItem
{
	
public:
	enum Type { TypeWeapon, TypeBoots, TypeHelm };
	virtual Type GetType() = 0;

};

