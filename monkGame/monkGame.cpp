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
#include <cstdlib>
#include <windows.h>
using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 6);
    system("cls");

    cout << " __   __  _______  __    _  ___   _    _______  _______  __   __  _______\n";
    cout << "|  |_|  ||       ||  |  | ||   | | |  |       ||   _   ||  |_|  ||       |\n";
    cout << "|       ||   _   ||   |_| ||   |_| |  |    ___||  |_|  ||       ||    ___|\n";
    cout << "|       ||  | |  ||       ||      _|  |   | __ |       ||       ||   |___ \n";
    cout << "|       ||  |_|  ||  _    ||     |_   |   ||  ||       ||       ||    ___|\n";
    cout << "| ||_|| ||       || | |   ||    _  |  |   |_| ||   _   || ||_|| ||   |_\n";
    cout << "|_|   |_||_______||_|  |__||___| |_|  |_______||__| |__||_|   |_||_______|\n";
    cout << "\n";



    SetConsoleTextAttribute(hConsole, 7);
    cout << "\n" << endl;
    cout << "Welcome to the Monk Game!" << endl;
    this_thread::sleep_for(chrono::seconds(2));

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

