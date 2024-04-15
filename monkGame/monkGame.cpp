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

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 6);
    system("cls");

    std::cout << " __   __  _______  __    _  ___   _    _______  _______  __   __  _______\n";
    std::cout << "|  |_|  ||       ||  |  | ||   | | |  |       ||   _   ||  |_|  ||       |\n";
    std::cout << "|       ||   _   ||   |_| ||   |_| |  |    ___||  |_|  ||       ||    ___|\n";
    std::cout << "|       ||  | |  ||       ||      _|  |   | __ |       ||       ||   |___ \n";
    std::cout << "|       ||  |_|  ||  _    ||     |_   |   ||  ||       ||       ||    ___|\n";
    std::cout << "| ||_|| ||       || | |   ||    _  |  |   |_| ||   _   || ||_|| ||   |_\n";
    std::cout << "|_|   |_||_______||_|  |__||___| |_|  |_______||__| |__||_|   |_||_______|\n";
    std::cout << "\n";

    SetConsoleTextAttribute(hConsole, 7);
    std::cout << "\n" << std::endl;
    std::cout << "Welcome to the Monk Game!" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << "Enter the player's name: ";
    std::string playerName;
    std::getline(std::cin, playerName);

    std::cout << "Give a description of the player: ";
    std::string playerDesc;
    std::getline(std::cin, playerDesc);

    Player player(playerDesc, playerName, 15, 20);

    std::vector<Room*> rooms = generateRooms(3, 2, 1);

    for (Room* room : rooms) {
        room->enter(player);
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }

    for (Room* room : rooms) {
        delete room;
    }

    return 0;
}
