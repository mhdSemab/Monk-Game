#pragma once

#ifndef MONSTERROOM_H
#define MONSTERROOM_H

#include "room.h"

class monsterRoom : public room {
public:
    void enter() override;
};

#endif // MONSTERROOM_H
