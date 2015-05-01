#include <iostream>
#include <queue>
#include <random> // Need for the random_device and mersenne twister, a pseudo-random number generator (pRNG).
#include <vector>
#include "Graph.h"

using namespace std;

random_device seed; // Gets a random number from /dev/random to seed pRNG.

/*
	This is a mersenne twister, a very commonly used pRNG. It's not vital that it is used in this project, but it is recommended to use these types of pRNGs
	instead of rand().
*/
mt19937 generator(seed()); // Creates a mersenne twister and seeds it with a random number from the random_device seed.

Graph::Graph(){

}

Graph::~Graph(){
 //destructor
}

void Graph::addRoom(int number){
    bool found = false;
    for(int i = 0; i < rooms.size(); i++){
        if(rooms[i].roomNum == number){
            found = true;
        }
    }
    if(found == false){
        Room v;
        v.roomNum = number;
        rooms.push_back(v);
    }
}

//***************************
// addEdge(int room1, int room2)
// Description:
//  creates an edge between two rooms
// Precondition:
//  rooms have been created
// Post condition:
//  edge set between rooms
//***************************

void Graph::addEdge(int room1, int room2){

    for(int i = 0; i < rooms.size(); i++){
        if(rooms[i].roomNum == room1){
            for(int j = 0; j < rooms.size(); j++){
                if(rooms[j].roomNum == room2 && i != j){
                    adjRoom av;
                    av.nextRoom = &rooms[j];
                    rooms[i].adj.push_back(av);

                }
            }
        }
    }
}

//***************************
// string randomDescription()
// generates a random number and returns a corresponding
// room description.
//***************************
string Graph::randomDescription(){
    string description;

    switch ( generator() % 4 ){
    case 0:
        description = "A dingy stone room.";
    case 1:
        description = "A very dingy stone room.";
    case 2:
        description = "A rather clean stone room.";
    case 3:
        description = "A cobweb filled stone room.";
    }
    return description;

}

void Graph::setRoomDescription(int roomNumber){

    Room *s;
    for(int i = 0; i <rooms.size();i++){
        if(rooms[i].roomNum == roomNumber){
            s = &rooms[i];
            s->description = randomDescription();
        }
    }
}

Room Graph::getRoom(int num){
    return rooms[num];
}