// monkGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "emptyRoom.h"
#include "monsterRoom.h"
#include "treasureRoom.h"
#include "roomGenerator.h"
#include "player.h"
#include "monster.h"
#include <string>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    //cout << "Hello World!\n";

    //emptyRoom empRoom;
    //monsterRoom monRoom;
    //treasureRoom teaRoom;

    ////entering each room
    //empRoom.enter();
    //monRoom.enter();
    //teaRoom.enter();

    cout << "Enter the player's name: ";
    string playerName;
    getline(cin, playerName);

    cout << "Give a description of the player: ";
    string playerDesc;
    getline(cin, playerDesc);

    player Player(playerDesc, playerName, 15, 3);

    vector<Room*> rooms = generateRooms(3, 2, 1);
    Player.display();

    
    for (Room* room : rooms) {

        room->enter(Player);


        this_thread::sleep_for(std::chrono::seconds(3));
    }

    for (Room* room : rooms) {
        delete room;
    }
    return 0;

}

