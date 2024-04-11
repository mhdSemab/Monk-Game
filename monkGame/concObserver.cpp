#include "pch.h"
#include "concObserver.h"
#include "Monster.h"
#include "Player.h"
#include <iostream>

void ConcreteObserver::notifyMonsterAttack(Monster* monster, Player* player) {
    std::cout << "Player " << player->getName() << " was attacked by monster " << monster->getName() << std::endl;
    // Adjust player's health or perform any other necessary actions
}

void ConcreteObserver::notifyMonsterDefend(Monster* monster) {
    std::cout << "Monster " << monster->getName() << " defended itself" << std::endl;
    // Perform any necessary actions when the monster defends
}