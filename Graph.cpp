#include <iostream>
#include <vector>
#include <queue>
#include "Graph.h"


using namespace std;

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

void Graph::setRoomDescription(int roomNumber){

    Room *s;
    for(int i = 0; i <rooms.size();i++){
        if(rooms[i].roomNum == roomNumber){
            s = &rooms[i];
        }
    }
    s->visited = true; //visted starting vertex
    queue<Room*> q; //init queue
    q.push(s);
    Room *u = new Room;
    while (!q.empty()){
        u = q.front();
        q.pop();
        for (int i = 0; i < u->adj.size(); i++){
            if (u->adj[i].nextRoom->visited == false){
                u->adj[i].nextRoom->visited = true;
                //u->adj[i].v->description = ; //set description to random description
                q.push(u->adj[i].nextRoom);
            }
        }
    }
}

