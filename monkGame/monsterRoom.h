#pragma once

#ifndef MONSTER_ROOM_H
#define MONSTER_ROOM_H

#include "room.h"
#include "entity.h"
#include "monster.h"
#include "player.h"

class MonsterRoom : public Room {
private:
    Player& player;
    Monster& monster;
public:
    MonsterRoom(Player& playerRef, Monster& monsterRef) : player(playerRef), monster(monsterRef) {}
    void enter(Entity& entity) override;
    void handleMonsterInteraction(Player& player, Monster& monster);
    void displayRoomInfo() const override;
};

#endif // MONSTER_ROOM_H
