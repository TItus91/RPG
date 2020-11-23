#include <iostream>
#include <ctime>
#include "Hammer.h"
#include "Dagger.h"
#include "Player.h"

using namespace std;

int main()
{
	srand(time(NULL));


	Hammer H(120, 50);
	Dagger D(60, 70);
	Player Kulp;
	Helm Kask(10);

	Player Stwor;
	Player Stwor2;
	Player Stwor3;

	cout << Kulp.Weapon_->Att << endl;

	Kulp.Equip(&H);
	Kulp.Equip(&Kask);
	
	
	cout << Kulp.Weapon_->Att << endl;
	cout << Kulp.Helm_->GetDefence() << endl;

	cout << Stwor.ActualHp << endl;
	Kulp.Attack(Stwor);
	Kulp.Attack(Stwor2);
	Kulp.Attack(Stwor3);
	cout << Stwor.ActualHp << endl;

	
	for (int i = 1; i <= 100; i++)
	{
		H.Attack();
		D.Attack();
	}
	
	cout << "Zadales: " << H.SumaAtt << " obrazen hammerem" << endl;
	cout << "Zadales: " << D.SumaAtt << " obrazen daggerem" << endl;
	


	return 0;
}