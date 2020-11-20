#include "Hammer.h"
#include <iostream>

int Hammer::Attack() 
{
	std::cout << "Atak Hammerem" << std::endl;
	return Att * IsCriticalHit();
}