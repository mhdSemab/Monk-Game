#pragma once

#ifndef MONSTER_ROOM_H
#define MONSTER_ROOM_H

#include "room.h"

class MonsterRoom : public Room {
public:
    void enter() override;
};

#endif // MONSTER_ROOM_H

