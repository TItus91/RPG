#include "IWeapon.h"
#include <iostream>

IWeapon::IWeapon(int x, int y)
{
	Att = x;
	Crit = y;
}

IItem::Type IWeapon::GetType()
{
	return IItem::TypeWeapon;
}

int IWeapon::IsCriticalHit()
{
	int r = rand() % 100 + 1;
	if (Crit >= r)
	{
		return 2;
	}
	else
	{
		return 1;
	}
}

// dodaje komentarz dla testu

