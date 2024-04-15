#include "pch.h"
#include "player.h"
#include <iostream>
#include <cstdlib>

// Constructor for the Player class
Player::Player(const std::string& playerDescription, const std::string& playerName, int health, int attack)
    : Entity(playerName, health, attack), description(playerDescription) {}

// Getter for player's description
std::string Player::getDescription() const {
    return description;
}

// Function to display player's information
void Player::display() const {
    std::cout << "Player Name: " << getName() << std::endl;
    std::cout << "Description: " << description << std::endl;
    std::cout << "Health Points: " << getHealth() << std::endl;
    std::cout << "Attack Points: " << getAttack() << std::endl;
}

// Function to deduct health points from the player
void Player::takeDamage(int damage) {
    Entity::takeDamage(damage);
    std::cout << getName() << " takes " << damage << " damage. Remaining health: " << getHealth() << std::endl;
}

// Function to check if the player is alive
bool Player::isAlive() const {
    return Entity::isAlive();
}
