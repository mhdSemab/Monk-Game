#pragma once
#ifndef ROOM_GENERATOR_H
#define ROOM_GENERATOR_H

#include <vector>
#include "emptyRoom.h"
#include "monsterRoom.h"
#include "treasureRoom.h"

using namespace std;

vector<Room*> generateRooms(int numEmptyRooms, int numMonsterRooms, int numTreasureRooms);

#endif // !ROOM_GENERATOR_H
