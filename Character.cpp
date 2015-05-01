#include "Character.h"

Character::Character()
{

}

Character::~Character()
{

}

int Character::getLevel()
{
	return level;
}

int Character::getHP()
{
	return HP;
}

int Character::getMP()
{
	return MP;
}

int Character::getStrength()
{
	return Strength;
}

int Character::getIntelligence()
{
	return Intelligence;
}

int Character::getDefense()
{
	return Defense;
}

int Character::getMagicDefense()
{
	return MagicDefense;
}

int Character::getAgility()
{
	return Agility;
}

int Character::getCharisma()
{
	return Charisma;
}

int Character::getLuck()
{
	return Luck;
}

void Character::setLevel(int val)
{
	level = val;
}

void Character::setHP(int val)
{
	HP = val;
}

void Character::setMP(int val)
{
	MP = val;
}

void Character::setLocation(Room* room)
{
	location = room;
}

void Character::setStrength(int val)
{
	Strength = val;
}

void Character::setDefense(int val)
{
	Defense = val;
}

void Character::setMagicDefense(int val)
{
	MagicDefense = val;
}

void Character::setAgility(int val)
{
	Agility = val;
}

void Character::setIntelligence(int val)
{
	Intelligence = val;
}

void Character::setCharisma(int val)
{
	Charisma = val;
}

void Character::setLuck(int val)
{
	Luck = val;
}

void Character::setKilled() // Set if character is dead or alive
{
	alive = false;
}

void Character::updateHP(int damage) // For use in combat
{
	HP -= damage;
}

void Character::updateMP(int manaCost) // For use in combat
{
	MP -= manaCost;
}

void Character::levelUp() // Changes stats and level
{
	// Here, the user must define a formula for calculating stat growth
}