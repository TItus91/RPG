#pragma once
#include "IArmor.h"

class Helm :
    public IArmor
{
public:

    
    Helm(int d) : IArmor(d)
    {

    }
    ~Helm()
    {

    }
    IItem::Type GetType() override;

};

