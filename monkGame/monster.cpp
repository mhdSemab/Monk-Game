#include "pch.h"
#include "monster.h"

// Constructor implementation
monster::monster(std::string name, int health, int attack) : monsterName(name), healthPoints(health), attackPoints(attack) {}

string monster::getName()
{
    return monsterName;
}

// Function to get monster health points
int monster::getHealthPoints() {
    return healthPoints;
}

// Function to get monster attack points
int monster::getAttackPoints() {
    return attackPoints;
}

// Function to set monster health points
void monster::setHealthPoints(int health) {
    healthPoints = health;
}

// Function to set monster attack points
void monster::setAttackPoints(int attack) {
    attackPoints = attack;
}

// Function to display monster information
void monster::display() {
    std::cout << "Description: " << monsterName << std::endl;
    std::cout << "Health Points: " << healthPoints << std::endl;
    std::cout << "Attack Points: " << attackPoints << std::endl;
}
