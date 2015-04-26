#ifndef Graph_H
#define Graph_H

#include <iostream>
#include <vector>
#include <string>


//***************************
// Graph class to create a "map" of rooms
// in the game world. Each room is identified by
// a number and stores a randomly determined description
// along with a vector of adjacent rooms
//***************************
struct adjRoom;

struct Room{
    int roomNum;
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
        void addRoom(int number);
        void setRoomDescription(int roomNumber);
        void addEdge(int room1, int room2);
        std::string randomDescription();
        Room getRoom(int num);
    protected:
    private:
        std::vector<Room> rooms;
};

#endif // GRAPH_H
