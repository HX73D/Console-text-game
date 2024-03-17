#include <iostream>
#include <string>
#include "./Text.h"

class Player {
public:
    int OffsetX;
    int OffsetY;

    void setStartingPosition() {
        OffsetX = 10;
        OffsetY = 10;
    }

    int health = 100;
    int damage = 1;
    std::string inventory [10];


    void manageHealth(bool action, int adjustHealth) {
        if (action) {
            health += adjustHealth;
        }
        else {
            health -= adjustHealth;
        }
    }

    void manageInvertory(std::string Item, int ammount) {

    }

    void manageMovement(int movement) {
        std::cout << "X: " << OffsetX << "\n" << "Y: " << OffsetY << "\n";
        if (movement == 1) {
            OffsetY += 1;
        }
        else if (movement == 2) {
            OffsetY -= 1;
        }
        else if (movement == 3) {
            OffsetX += 1;
        }
        else {
            OffsetX -= 1;
        }
        std::cout << "X: " << OffsetX << "\n" << "Y: " << OffsetY << "\n";
    }

};
class World {
public:
    
    int gridSizeX = 20;
    int gridSizeY = 20;

    void PlayerOffset() {

    }
};

class UserInterface {
public:

};

void ManageGrid()
{

    int x [5];
    int y [5];


}


int main()
{
    Player player;
    player.setStartingPosition();
    std::cout << player.health << "\n";
    player.manageHealth(0, 3);
    std::cout << player.health << "\n";
    player.manageMovement(1);
    std::cout << quests[0];
}

