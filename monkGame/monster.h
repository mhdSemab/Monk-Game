#pragma once
#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <string>
#include "entity.h"


class Monster : public Entity {
private:
    int attackPoints;

public:
    // Constructor
    Monster(const std::string& name, int health, int attack);

    // Getter for attack points
    int getAttackPoints() const;

    // Setter for attack points
    void setAttackPoints(int attack);

    // Display function to show monster information
    void display() const;
};

#endif // !MONSTER_H
