#ifndef CHARACTER_H
#define CHARACTER_H

#include "Graph.h"

/*
	The character class is used to hold the stats and locations of characters in the game. Monsters/players are derived from this class
*/

class Character
{
public:
	Character();
	~Character();
	Room *getLocation();
	int getLevel();
	int getHP();
	int getMP();
	int getStrength();
	int getIntelligence();
	int getDefense();
	int getMagicDefense();
	int getAgility();
	int getCharisma();
	int getLuck();
	void setLevel(int);
	void setLocation(Room*);
	void setHP(int);
	void setMP(int);
	void setStrength(int);
	void setIntelligence(int);
	void setDefense(int);
	void setMagicDefense(int);
	void setAgility(int);
	void setCharisma(int);
	void setLuck(int);
	void setKilled(); // Set if character is dead or alive
	void updateHP(int); // For use in combat
	void updateMP(int); // For use in combat
	void levelUp(); // Changes stats and level
private:
	Room *location; // Where the character is located
	bool alive = true;
	int level;
	int HP;
	int MP;
	int Strength;
	int Intelligence;
	int Defense;
	int MagicDefense;
	int Agility;
	int Charisma;
	int Luck;
};

#endif