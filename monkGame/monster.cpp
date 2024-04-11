#include "pch.h"
#include "monster.h"

using namespace std;

Monster::Monster(const string& name, int health, int attack)
    : Entity(name, health, attack), attackPoints(attack) {}

int Monster::getAttackPoints() const {
    return attackPoints;
}

void Monster::setAttackPoints(int attack) {
    attackPoints = attack;
}

void Monster::attack(Entity& target) {
    cout << getName() << " attacks " << target.getName() << " with " << attackPoints << " attack points!" << endl;
    target.takeDamage(attackPoints);
}

void Monster::display() const {
    cout << "Monster Name: " << getName() << endl;
    cout << "Health Points: " << getHealth() << endl;
    cout << "Attack Points: " << attackPoints << endl;
}
