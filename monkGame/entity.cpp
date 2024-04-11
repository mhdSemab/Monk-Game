#include "pch.h"
#include "entity.h"

Entity::Entity(const string& name, int health, int attack)
    : entityName(name), entityHealth(health), entityAttack(attack) {}

string Entity::getName() const {
    return entityName;
}

int Entity::getHealth() const {
    return entityHealth;
}

int Entity::getAttack() const {
    return entityAttack;
}

void Entity::takeDamage(int damage) {
    entityHealth -= damage;
    if (entityHealth < 0) {
        entityHealth = 0;
    }
}

bool Entity::isAlive() const {
    return entityHealth > 0;
}
