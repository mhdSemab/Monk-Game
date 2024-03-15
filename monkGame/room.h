#pragma once

#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include "player.h"

class Room {
public:
	virtual void enter(player& Player) = 0;
	virtual void displayRoomInfo() const = 0;
};
#endif // !ROOM_H
