#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#pragma once

#include "entity.h"
#include <string>

class Player : public Entity {
private:
    std::string description;

public:
    Player(const std::string& playerDescription, const std::string& playerName, int health, int attack);

    std::string getDescription() const;

    void display() const;

    void takeDamage(int damage) override;

    bool isAlive() const override;
};


#endif // !PLAYER_H
