#pragma once
#ifndef EMPTY_ROOM_H
#define EMPTY_ROOM_H

#include "room.h"
#include "entity.h"

class EmptyRoom : public Room {
public:
    void enter(Entity& entity) override;

    void displayRoomInfo() const override;
};

#endif // EMPTY_ROOM_H
