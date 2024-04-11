#pragma once
#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <string>
using namespace std;

#include "entity.h"
#include <iostream>
#include <string>

class Monster : public Entity {
private:
    int attackPoints;

public:
    Monster(const std::string& name, int health, int attack);

    int getAttackPoints() const;
    void setAttackPoints(int attack);

    void attack(Entity& target) override;
    void display() const;
};

#endif // !MONSTER_H
