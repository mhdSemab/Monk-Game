#include "pch.h"
#include "room.h"
#include <iostream>

// Avoid using namespace std to prevent namespace pollution

// This is just a pure virtual function, so we don't need to implement it here.
// We will implement it in derived classes.
void Room::displayRoomInfo() const {
    std::cout << "Room Information" << std::endl;
    std::cout << "This room is generic. Nothing special here." << std::endl;
}
