#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"
#include <string>

using namespace std;

class Player : public Entity {
private:
    string description;

public:
    Player(const string& playerDescription, const string& playerName, int health, int attack);

    string getDescription() const;

    void display() const;

    void attack(Entity& target) override;

    void takeDamage(int damage) override;

    bool isAlive() const override;
};

#endif // !PLAYER_H
