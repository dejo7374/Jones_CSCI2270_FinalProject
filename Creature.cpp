#include "Creature.h"

/*
	Edit:
	Removed:
	<iostream>, <cstdlib>, <ctime>, "Graph.h", and "using namespace std"
	They are uneeded here for the library to work.
*/

Creature::Creature(){

}

Room* Creature::getLocation() // Edit: Get location was missing
{
	return location;
}
