#ifndef Creature
#define Creature
#include <string>
#include <cstdlib> //rand function
#inclue <Graph.h>

//***************************
// Class for use as the player character
// and enemies. Store statistics to
// represent fighting abilities.
// Also tracks health.
//***************************

Class Creature
{
    public:
        Creature();
        //getter methods
        int get_hit(); //get current hitpoints
        int get_maxhit();  //get max hitpoints
        int get_Str(); //get Strength
        int get_Dex(); //get Dexterity
    protected:
    private:
        int hitpoints;      //current health total
        int maxhitpoints;   //maximum health total
        int Strength;       //Strength attribute for combat resolution
        int Dexterity;      //Dexterity attribute for combat resolution
};




#endif // Creature
