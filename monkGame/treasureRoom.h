#pragma once

#ifndef TREASURE_ROOM_H
#define TREASURE_ROOM_H

#include "room.h"

class TreasureRoom : public Room {
public:
    void enter(Entity& entity) override;
    void displayRoomInfo() const override;
};

#endif // TREASURE_ROOM_H
