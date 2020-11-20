#pragma once
#include "IItem.h"
class IWeapon :
    public IItem
{

public:
    IWeapon(int x, int y);
    ~IWeapon()
    {

    }
    int Att, Crit;
    IItem::Type virtual GetType() override;
    int virtual Attack()=0;
    int virtual IsCriticalHit();
    int SumaAtt=0;

};

