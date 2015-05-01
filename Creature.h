#ifndef Creature_H
#define Creature_H
#include "Graph.h"
#include "Character.h"

class Creature : Character
{
    public:
        Creature(std::vector<Room*>); // Needs the vector of rooms to randomly place a creature;
		~Creature();
    protected:
    private:
};

#endif // Creature_H
