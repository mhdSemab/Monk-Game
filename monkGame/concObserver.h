// ConcreteObserver.h
#pragma once
#include "battleObs.h"

class ConcreteObserver : public BattleObserver {
public:
    void notifyMonsterAttack(Monster* monster, Player* player) override;
    void notifyMonsterDefend(Monster* monster) override;
};

