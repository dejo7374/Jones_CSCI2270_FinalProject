#include "Creature.h"
#include <random>
#include "Graph.h"

std::random_device seed2; // Used to seed pseudo-random number generator (pRNG), gets a random number from /dev/random
std::mt19937 generator2(seed2()); //pRNG, a Mersenne Twister

Creature::Creature(std::vector<Room*> rooms)
{
	std::uniform_int_distribution<int> stats(1, 10); // Uses a pRNG to generate a number between 1 and 10
	std::uniform_int_distribution<int> HPandMP(10, 500); // Uses a pRNG to generate a number between 10 and 500
	std::uniform_int_distribution<int> locationGen(0, rooms.size()); // Uses a pRNG to generate a number between 0 and the number of rooms in the map
	setLevel(0); // Creatures may not need a level
	setHP(HPandMP(generator2));
	setMP(HPandMP(generator2));
	setStrength(stats(generator2));
	setIntelligence(stats(generator2));
	setDefense(stats(generator2));
	setMagicDefense(stats(generator2));
	setAgility(stats(generator2));
	setCharisma(stats(generator2));
	setLuck(stats(generator2));
	int roomNum = locationGen(generator2);
	setLocation(rooms[roomNum]);
}

Creature::~Creature()
{

}