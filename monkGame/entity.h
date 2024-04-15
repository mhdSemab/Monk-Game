// entity.h
#pragma once
#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
protected:
    std::string entityName;
    int entityHealth;
    int entityAttack;

public:
    Entity(const std::string& name, int health, int attack);
    virtual ~Entity() = default;

    std::string getName() const;
    int getHealth() const;
    int getAttack() const;

    void setHealth(int newHealth);
    void setAttack(int newAttack);

    void attack(Entity& target) const;
    void defend();
    virtual void takeDamage(int damage);
    virtual bool isAlive() const;
    bool isSuccessful() const;
};

#endif // ENTITY_H
