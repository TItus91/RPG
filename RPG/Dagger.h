#pragma once
#include "IWeapon.h"
class Dagger :
    public IWeapon
{
public:
    Dagger(int x, int y) : IWeapon(x, y)
    {

    }

    ~Dagger()
    {

    }
    int Attack() override;
};

