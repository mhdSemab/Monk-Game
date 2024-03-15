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

    player Player(playerName, playerDesc, 15, 3);

    vector<Room*> rooms = generateRooms(2, 1, 1);

    for (Room* room : rooms) {
        Player.display();
        room->displayRoomInfo();

        room->enter(Player);

        //if (!Player.isAlive()) {
        //    cout << "Game over!" << endl;
        //    break;
        //}
    }

    for (Room* room : rooms) {
        delete room;
    }
    return 0;

}

