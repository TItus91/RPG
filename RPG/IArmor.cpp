#include "IArmor.h"
#include <iostream>

IArmor::IArmor(int d) : Def(d)
{

}

int IArmor::GetDefence()
{
	return Def;
}

