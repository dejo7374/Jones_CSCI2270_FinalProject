#ifndef Creature_H
#define Creature_H
#include "Graph.h"

// Edit: Removed <string> and <cstdlib>, uneeded here for library to work.

//***************************
// Class for use as the player character
// and enemies. Store statistics to
// represent fighting abilities.
// Also tracks health.
//***************************

class Creature
{
    public:
        Creature();
		~Creature(); // Added destructor
        //getter methods
        Room* getLocation();
    protected:
    private:
        Room *location;
};

#endif // Creature_H
