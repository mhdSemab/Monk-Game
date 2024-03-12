#include "pch.h"
#include "roomGenerator.h"
#include <random>
#include <algorithm>

using namespace std;

vector<Room*> generateRooms(int numEmptyRooms, int numMonsterRooms, int numTreasureRooms) {
    vector<Room*> rooms;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 3);

    //generating empty rooms
    for (int i = 0; i < numEmptyRooms; ++i) {
        rooms.push_back(new EmptyRoom());
    }

    //genrating monster room
    for (int i = 0; i < numMonsterRooms; ++i) {
        rooms.push_back(new MonsterRoom());
    }

    //generating a treasure room
    for (int i = 0; i < numTreasureRooms; ++i) {
        rooms.push_back(new TreasureRoom());
    }

    shuffle(rooms.begin(), rooms.end(), gen);

    return rooms;
}
