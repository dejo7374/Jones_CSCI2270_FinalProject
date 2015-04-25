#ifndef Graph
#define Graph

#include <iostream>
#include <vector>
#include "Creature.h"

//***************************
// Graph class to create a "map" of rooms
// in the game world. Each room is identified by
// a number and stores a randomly determined description
// along with a vector of adjacent rooms
//***************************
struct adjRoom;

struct Room{
    int roomNumber;
    std::string description;
    bool visited;
    std::vector<adjRoom> adj; //
};

struct adjRoom{
    Room *nextRoom; //destination room
};

struct queueV{
int distance; //number of edges
std::vector<Room*> path; //vertices on the path
};

class Graph{
    public:
        Graph();
        ~Graph();
        void addRoom(int roomNumber);
        void setRoomDescriptions(int roomNumber);
        void addEdge(int room1, int room2);
    protected:
    private:
        std::vector<Room> rooms;
};
#endif // GRAPH
