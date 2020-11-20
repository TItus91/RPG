#include "Dagger.h"
#include <iostream>

int Dagger::Attack()
{
	std::cout << "atak daggerem" << std::endl;
	return Att * IsCriticalHit();
}