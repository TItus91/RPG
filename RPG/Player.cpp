#include "Player.h"

Player::Player() 
	: Weapon_(new Hammer(1, 1)), Boots_(new Boots(1)), Helm_(new Helm(1)), Xp(0), Level(1), MaxHp(100), ActualHp(MaxHp)
{

}

Player::Player(int att, int crit, int bootdef, int helmdef, int xp, int lvl, int hp)
	: Weapon_(new Hammer(att, crit)), Boots_(new Boots(bootdef)), Helm_(new Helm(helmdef)), Xp(xp), Level(lvl), MaxHp(hp), ActualHp(MaxHp)
{

}

Player::~Player()
{

}



void Player::Equip(IItem* item)
{
	if (item->GetType() == IItem::TypeWeapon) Weapon_ = (IWeapon*)item;
	else if (item->GetType() == IItem::TypeBoots) Boots_ = (Boots*)item;
	else if (item->GetType() == IItem::TypeHelm) Helm_ = (Helm*)item;

}

void Player::Attack(Player& opponent)
{
	opponent.ActualHp -= (Player::Weapon_->Attack()-opponent.GetDefece());
	if (opponent.ActualHp <= 0) Player::GetExperience(opponent.MaxHp);
}

int Player::GetMaxHp()
{
	return MaxHp;
}

int Player::GetHp()
{
	return ActualHp;
}

int Player::GetDefece()
{
	return Player::Boots_->Def + Player::Helm_->Def;
}

void Player::GetExperience(int howmuch)
{
	Player::Xp += howmuch;
	std::cout << "Gained " << howmuch << " experience" << std::endl;
	while (Player::Xp >= Player::Level * 100) Player::LevelUp();
}

void Player::LevelUp()
{
	Player::Level += 1;
	std::cout << "lvl up! current lvl: " << Player::Level << std::endl;
}

