#include "pch.h"
#include "entity.h"
#include <iostream>
#include <random>

using namespace std;

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

int Entity::setHealth(int newHealth)
{
    entityHealth = newHealth;
    return 0;
}

int Entity::setAttack(int newAttack)
{
    entityAttack = newAttack;
    return 0;
}


void Entity::takeDamage(int damage) {
    entityHealth -= damage;
    if (entityHealth < 0) {
        entityHealth = 0;
    }
}

void Entity::attack(Entity& target) const{
    int damage = getAttack();
    target.takeDamage(damage);
    cout << getName() << " attacks " << target.getName() << " with " << damage << " attack points!" << endl;
    //implement here
}

void Entity::defend() {
    entityHealth++;
    cout << getName() << "'s health has increased by 1." << endl;
    //implement here
}


bool Entity::isAlive() const {
    return entityHealth > 0;
}

bool Entity::isSuccessful() const
{
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0, 1);

    double randomValue = dis(gen);
    return randomValue < 0.5;
}
