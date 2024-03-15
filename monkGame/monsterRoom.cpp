#include "pch.h"
#include "monsterRoom.h"
#include <iostream>

void MonsterRoom::enter(player& Player) {
    std::cout << "You have entered a monster room!" << std::endl;
    // Implement monster encounter logic here
}

void MonsterRoom::displayRoomInfo() const
{
    std::cout << "You have entered the monster room!" << std::endl;
}
