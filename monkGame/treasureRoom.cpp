#include "pch.h"
#include "treasureRoom.h"
#include <iostream>

void TreasureRoom::enter(player& Player) {
    std::cout << "You have entered a treasure room!" << std::endl;
    // Implement treasure collection logic here
}


void TreasureRoom::displayRoomInfo() const
{
    std::cout << "You have entered the treasure room! You win!" << std::endl;
}
