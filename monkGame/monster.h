#pragma once
#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <string>
#include "entity.h"
using namespace std;


class Monster : public Entity {
private:
    int attackPoints;

public:
    Monster(const string& name, int health, int attack);

    int getAttackPoints() const;
    void setAttackPoints(int attack);

    void display() const;
};

#endif // !MONSTER_H
