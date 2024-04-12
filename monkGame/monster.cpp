#include "pch.h"
#include "monster.h"
#include <cstdlib>

using namespace std;

Monster::Monster(const string& name, int health, int attack)
    : Entity(name, health, attack), attackPoints(attack) {}

int Monster::getAttackPoints() const {
    return attackPoints;
}

void Monster::setAttackPoints(int attack) {
    attackPoints = attack;
}


void Monster::display() const {
    cout << "Monster Name: " << getName() << endl;
    cout << "Health Points: " << getHealth() << endl;
    cout << "Attack Points: " << attackPoints << endl;
}
