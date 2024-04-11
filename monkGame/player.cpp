#include "pch.h"
#include "player.h"
#include <iostream>

using namespace std;

Player::Player(const string& playerDescription, const string& playerName, int health, int attack)
    : Entity(playerName, health, attack), description(playerDescription) {}

string Player::getDescription() const {
    return description;
}

void Player::display() const {
    cout << "Player Name: " << getName() << endl;
    cout << "Description: " << description << endl;
    cout << "Health Points: " << getHealth() << endl;
    cout << "Attack Points: " << getAttack() << endl;
}

void Player::attack(Entity& target) {
    cout << getName() << " attacks " << target.getName() << " with " << getAttack() << " attack points!" << endl;
    target.takeDamage(getAttack());
}

void Player::takeDamage(int damage) {
    Entity::takeDamage(damage);
    cout << getName() << " takes " << damage << " damage. Remaining health: " << getHealth() << endl;
}

bool Player::isAlive() const {
    return Entity::isAlive();
}
