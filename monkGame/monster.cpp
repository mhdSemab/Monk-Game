#include "pch.h"
#include "monster.h"
#include <cstdlib>

// Constructor for the Monster class
Monster::Monster(const std::string& name, int health, int attack)
    : Entity(name, health, attack), attackPoints(attack) {}

// Getter for the monster's attack points
int Monster::getAttackPoints() const {
    return attackPoints;
}

// Setter for the monster's attack points
void Monster::setAttackPoints(int attack) {
    attackPoints = attack;
}

// Function to display the monster's details
void Monster::display() const {
    std::cout << "Monster Name: " << getName() << std::endl;
    std::cout << "Health Points: " << getHealth() << std::endl;
    std::cout << "Attack Points: " << attackPoints << std::endl;
}
