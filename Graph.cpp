#include <iostream>
#include <vector>
#include <queue>
#include "Graph.h"
#include "Creature.h"

using namespace std;

Graph::Graph(){

}

Graph::~Graph(){
 //destructor
}

void Graph::addRoom(int roomNumber){

}

void Graph::setRoomDescription(int roomNumber){

    Room *s;
    for(int i = 0; i <rooms.size();i++){
        if(rooms[i].roomNumber == roomNumber){
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
            if (u->adj[i].v->visited == false){
                u->adj[i].v->visited = true;
                //u->adj[i].v->description = ; //set description to random description
                q.push(u->adj[i].v);
            }
        }
    }
}

