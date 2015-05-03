#include <iostream>
#include "Graph.h"
#include "Character.h"
using namespace std;
void mainMenu()
{
    cout << "1. Set Strength" << endl;
    cout << "2. Set Intelligence" << endl;
    cout << "3. Set Defense" << endl;
    cout << "4. Set Magic Defense" << endl;
    cout << "5. Set Agility" << endl;
    cout << "6. Set Charisma" << endl;
    cout << "7. Set Luck" << endl;

}
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
    Character user;
    cout << "attribute 100 total attribute points to your character" << endl;
    cout << "==============================" << endl;

    int userPoints = 100;
    while(userPoints > 0)
    {
        mainMenu();
        int menuChoice;
        cin >> menuChoice;
        if(menuChoice == 1)
        {
            cout << "Strength Attribute Points: " << endl;
            int addPoints;
            cin >> addPoints;
            user.setStrength(addPoints);
            userPoints = userPoints - addPoints;
            cout << "==============================" << endl;

            cout << userPoints << " Attribute Points Left" << endl;
            cout << "==============================" << endl;

            
        }
        if(menuChoice == 2)
        {
            cout << "Intelligence Attribute Points: " << endl;
            int addPoints;
            cin >> addPoints;
            user.setIntelligence(addPoints);
            userPoints = userPoints - addPoints;
            cout << "==============================" << endl;

            cout << userPoints << " Attribute Points Left" << endl;
            cout << "==============================" << endl;


        }
        if(menuChoice == 3)
        {
            cout << "Defense Attribute Points: " << endl;
            int addPoints;
            cin >> addPoints;
            user.setDefense(addPoints);
            userPoints = userPoints - addPoints;
            cout << "==============================" << endl;

            cout << userPoints << " Attribute Points Left" << endl;
            cout << "==============================" << endl;


        }
        if(menuChoice == 4)
        {
            cout << "Magic Defense Attribute Points: " << endl;
            int addPoints;
            cin >> addPoints;
            user.setMagicDefense(addPoints);
            userPoints = userPoints - addPoints;
            cout << "==============================" << endl;

            cout << userPoints << " Attribute Points Left" << endl;
            cout << "==============================" << endl;

        }
        if(menuChoice == 5)
        {
            cout << "Agility Attribute Points: " << endl;
            int addPoints;
            cin >> addPoints;
            user.setAgility(addPoints);
            userPoints = userPoints - addPoints;
            cout << "==============================" << endl;

            cout << userPoints << " Attribute Points Left" << endl;

            cout << "==============================" << endl;

        }
        if(menuChoice == 6)
        {
            cout << "Charisma Attribute Points: " << endl;
            int addPoints;
            cin >> addPoints;
            user.setCharisma(addPoints);
            userPoints = userPoints - addPoints;
            cout << "==============================" << endl;

            cout << userPoints << " Attribute Points Left" << endl;
            cout << "==============================" << endl;

        }
        if(menuChoice == 7)
        {
            cout << "Luck Attribute Points: " << endl;
            int addPoints;
            cin >> addPoints;
            user.setLuck(addPoints);
            userPoints = userPoints - addPoints;
            cout << "==============================" << endl;

            cout << userPoints << " Attribute Points Left" << endl;
            cout << "==============================" << endl;


        }


        
    }
    cout << "==============================" << endl;
    cout << "Strength: " << user.getStrength() << endl;
    cout << "Intelligence: " << user.getIntelligence() << endl;
    cout << "Defense: " << user.getDefense() << endl;
    cout << "Magic Defense: " << user.getMagicDefense() << endl;
    cout << "Agility: " << user.getAgility() << endl;
    cout << "Charisma: " << user.getCharisma() << endl;
    cout << "Luck: " << user.getLuck() << endl;
    cout << "==============================" << endl;


    

    return 0;
}
