// room.h
#pragma once
#ifndef ROOM_H
#define ROOM_H

#include "entity.h"

class Room {
public:
    virtual void enter(Entity& entity) = 0;
    virtual void displayRoomInfo() const = 0;
};

#endif // ROOM_H
