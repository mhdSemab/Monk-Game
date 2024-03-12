#pragma once

#ifndef TREASURE_ROOM_H
#define TREASURE_ROOM_H

#include "room.h"

class TreasureRoom : public Room {
public:
    void enter() override;
};

#endif // TREASURE_ROOM_H
