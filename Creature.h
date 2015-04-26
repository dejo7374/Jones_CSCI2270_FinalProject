#ifndef Creature_H
#define Creature_H
#include <string>
#include <cstdlib> //rand function
#include "Graph.h"

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
        //getter methods
        Room getLocation();
    protected:
    private:
        Room *location;
};




#endif // Creature_H
