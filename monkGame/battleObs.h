#pragma once
#ifndef BATTLE_OBSERVER_H
#define BATTLE_OBSERVER_H

// Forward declarations
class Monster;
class Player;

class BattleObserver {
public:
    virtual void notifyMonsterAttack(Monster* monster, Player* player) = 0;
    virtual void notifyMonsterDefend(Monster* monster) = 0;
};

#endif // !BATTLE_OBSERVER_H
