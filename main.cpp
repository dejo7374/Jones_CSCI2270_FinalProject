#include <iostream>
#include "Graph.h"
#include "Creature.h"

using namespace std;

int main()
{
    Graph gameB;
    //create 10 rooms
    for (int i=1; i < 11; i++){
        gameB->addRoom(i);
    }


    return 0;
}
