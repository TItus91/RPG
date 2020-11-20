#pragma once
#include "IItem.h"
class IArmor :
    public IItem
{
public:
    IArmor(int d);
    ~IArmor()
    {

    }
    int Def;
    int GetDefence();

};

