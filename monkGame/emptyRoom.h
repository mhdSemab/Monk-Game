#pragma once
#ifndef EMPTY_ROOM_H
#define EMPTY_ROOM_H

#include <iostream>
#include "room.h"

class emptyRoom : public room{
public:

	void enter() override;
};
#endif // !EMPTY_ROOM_H
