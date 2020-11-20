#pragma once
#include "IWeapon.h"

class Hammer :
    public IWeapon
{
public:
    Hammer(int x, int y) : IWeapon(x, y)
    {
        
    }

    ~Hammer()
    {

    }
     int Attack() override;

};

