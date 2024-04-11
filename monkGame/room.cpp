#include "pch.h"
#include "room.h"
#include <iostream>

using namespace std;

// This is just a pure virtual function, so we don't need to implement it here.
// We will implement it in derived classes.
void Room::displayRoomInfo() const {
    cout << "Room Information" << endl;
    cout << "This room is generic. Nothing special here." << endl;
}
