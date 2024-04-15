#include "pch.h"
#include "entity.h"
#include <iostream>
#include <random>

// Constructor for the Entity class
Entity::Entity(const std::string& name, int health, int attack)
    : entityName(name), entityHealth(health), entityAttack(attack) {}

// Getter for the entity's name
std::string Entity::getName() const {
    return entityName;
}

// Getter for the entity's health
int Entity::getHealth() const {
    return entityHealth;
}

// Getter for the entity's attack
int Entity::getAttack() const {
    return entityAttack;
}

// Setter for the entity's health
void Entity::setHealth(int newHealth)
{
    entityHealth = newHealth;
}

// Setter for the entity's attack
void Entity::setAttack(int newAttack)
{
    entityAttack = newAttack;
}

// Function to handle the entity taking damage
void Entity::takeDamage(int damage) {
    entityHealth -= damage;
    if (entityHealth < 0) {
        entityHealth = 0;
    }
}

// Function for the entity to attack a target
void Entity::attack(Entity& target) const {
    int damage = getAttack();
    target.takeDamage(damage);
    std::cout << getName() << " attacks " << target.getName() << " with " << damage << " attack points!" << std::endl;
}

// Function for the entity to defend itself
void Entity::defend() {
    entityHealth++;
    std::cout << getName() << "'s health has increased by 1." << std::endl;
}

// Function to check if the entity is alive
bool Entity::isAlive() const {
    return entityHealth > 0;
}

// Function to check if an action is successful
bool Entity::isSuccessful() const
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0, 1);

    double randomValue = dis(gen);
    return randomValue < 0.5;
}
