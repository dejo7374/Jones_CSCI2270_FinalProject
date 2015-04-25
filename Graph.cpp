#include <iostream>
#include <vector>
#include <queue>

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
    for(int i = 0; i <vertices.size();i++){
        if(rooms[i].roomNumber == roomNumber){
            s = &vertices[i];
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

