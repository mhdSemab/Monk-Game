#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "monster.h"
#include <string>
using namespace std;

class player : public monster {
private:
	string description;

public:
	player(string playerDescription, string playerName, int health, int attack);

	string getDescription();

	void display(); 
};

#endif // !PLAYER_H
