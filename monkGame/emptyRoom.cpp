#include "pch.h"
#include "emptyRoom.h"
#include <iostream>

void EmptyRoom::enter(player& Player) {
    std::cout << "You have entered an empty room!" << std::endl;
    // Implement any specific logic for empty rooms here

}

void EmptyRoom::displayRoomInfo() const {
    std::cout << "You have entered an empty room!" << std::endl;
}
