#pragma once
#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <string>
using namespace std;

class monster{
private:
	string monsterName;
	int healthPoints;
	int attackPoints;

public:
	monster(string name, int health, int attack);

	string getName();

	int getHealthPoints();
	
	int getAttackPoints();
	
	void setHealthPoints(int health);
	
	void setAttackPoints(int attack);

	void display();

};


#endif // !MONSTER_H
