#include "pch.h"
#include "player.h"
#include <iostream>

player::player(string playerDescription, string playerName, int health, int attack) :
	monster(playerName, health, attack), description(playerDescription) {}

string player::getDescription() {
	return description;
}

void player::display() {
	cout << "Name: " << getName() << endl;
	cout << "Description: " << description << endl;
	cout << "Health Points: " << getHealthPoints() << endl;
	cout << "Attack Points: " << getAttackPoints() << endl;

}