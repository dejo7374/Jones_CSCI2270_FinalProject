#ifndef Graph
#define Graph
#include <iostream>
#include <vector>
#include <Creature.h>

//***************************
// Graph class to create a "map" of rooms
// in the game world. Each room is identified by
// a number and stores a randomly determined description
// along with a vector of adjacent rooms
//***************************
struct Room{
    int roomNumber;
    std::string description;
    bool enemyPresent;
    bool visited;
    std::vector<adjRoom> adj; //
};

struct adjRoom{
    Room *nextRoom; //destination room
};


class Graph()
{
    public:
        Graph();
        ~Graph();
        void addRoom(int roomNumber);
        Room* createRoom(int roomNumber);
        void addEdge(int room1, int room2);
        void placeEnemies();
        void
    protected:
    private:
        std::vector<Room> rooms;
};
#endif // GRAPH
