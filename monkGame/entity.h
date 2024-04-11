#pragma once
#ifndef ENTITY_H
#define ENTITY_H

#include <string>
using namespace std;

class Entity {
protected:
    string entityName;
    int entityHealth;
    int entityAttack;

public:
    Entity(const string& name, int health, int attack);
    virtual ~Entity() = default;

    string getName() const;
    int getHealth() const;
    int getAttack() const;

    virtual void attack(Entity& target) = 0;
    virtual void takeDamage(int damage);
    virtual bool isAlive() const;
};

#endif // ENTITY_H
