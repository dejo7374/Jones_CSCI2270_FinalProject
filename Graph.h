#ifndef Graph
#define Graph
#include <iostream>
#include <vector>
//***************************
// Graph class to create a "map" of rooms
// in the game world. Each room is identified by
// a number and stores a randomly determined description
// along with a vector of adjacent rooms
//***************************
struct Room{
    int roomNumber;
    std::string description;
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
        void addVertex(int roomNumber);
        void addEdge(std::string vl, std::string v2, int weight);
        void displayEdges();
    protected:
    private:
        std::vector<vertex> vertices;
};
#endif // GRAPH
