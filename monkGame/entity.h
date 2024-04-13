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

    int setHealth(int newHealth);
    int setAttack(int newAttack);

    void attack(Entity& target) const;
    void defend();
    virtual void takeDamage(int damage);
    virtual bool isAlive() const;
    bool isSuccessful() const;
};

#endif // ENTITY_H
