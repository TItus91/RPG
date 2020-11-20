#pragma once
#include "IArmor.h"
class Boots :
    public IArmor
{
public:
    Boots(int d) : IArmor(d)
    {

    }
    ~Boots()
    {

    }
    IItem::Type GetType() override;

};

