#include <iostream>
#include "Graph.h"


using namespace std;

int main()
{
    Graph gameB;
    //create 10 rooms
    for (int i=1; i < 11; i++){
        gameB.addRoom(i);
    }
    gameB.addEdge(1,2);
    gameB.addEdge(1,4);
    gameB.addEdge(2,3);
    gameB.addEdge(2,5);
    gameB.addEdge(3,6);
    gameB.addEdge(4,5);
    gameB.addEdge(4,7);
    gameB.addEdge(5,6);
    gameB.addEdge(5,8);
    gameB.addEdge(6,9);
    gameB.addEdge(7,8);
    gameB.addEdge(8,9);
    gameB.addEdge(9,10);
    for (int i=1; i < 11; i++){
        gameB.setRoomDescription(i);
    }

    return 0;
}
