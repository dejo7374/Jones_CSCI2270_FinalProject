#include <iostream>
#include <cstdlib> //rand function
#include <time> //system time for random seed
using namespace std;

Creature(){
    srand(time(NULL));
    hitpoints = (rand()%10) + 1; //generate
    maxhitpoints = hitpoints;
    Strength = (rand()10 + 5);
    Dexterity = (rand()10 + 5);
}


int get_hit(){
    return hitpoints;
} //get current hitpoints

int get_maxhit(){
    return maxhitpoints;
} //get max hitpoints

int get_Str(){
    return Strength;
} //get Strength

int get_Dex(){
    return Dexterity;
} //get Dexterity
