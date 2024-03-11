#pragma once

#ifndef TREASUREROOM_H
#define TREASUREROOM_H

#include "room.h"

class treasureRoom : public room {
public:
    void enter() override;
};

#endif // TREASUREROOM_H
