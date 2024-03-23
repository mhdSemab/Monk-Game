#include "pch.h"
#include "monsterRoom.h"
#include <iostream>
#include <thread>
#include <cstdlib>
#include <chrono>
#include <Windows.h>

void MonsterRoom::enter(player& Player) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 5);
    system("cls");

    std::cout << " __   __  _______  __    _  _______  _______  _______  ______      ______    _______  _______  __   __ \n";
    std::cout << "|  |_|  ||       ||  |  | ||       ||       ||       ||    _ |    |    _ |  |       ||       ||  |_|  |\n";
    std::cout << "|       ||   _   ||   |_| ||  _____||_     _||    ___||   | ||    |   | ||  |   _   ||   _   ||       |\n";
    std::cout << "|       ||  | |  ||       || |_____   |   |  |   |___ |   |_||_   |   |_||_ |  | |  ||  | |  ||       |\n";
    std::cout << "|       ||  |_|  ||  _    ||_____  |  |   |  |    ___||    __  |  |    __  ||  |_|  ||  |_|  ||       |\n";
    std::cout << "| ||_|| ||       || | |   | _____| |  |   |  |   |___ |   |  | |  |   |  | ||       ||       || ||_|| |\n";
    std::cout << "|_|   |_||_______||_|  |__||_______|  |___|  |_______||___|  |_|  |___|  |_||_______||_______||_|   |_|\n";
    std::cout << "|_|   |_||_______||_|  |__||_______|  |___|  |_______||___|  |_|  |___|  |_||_______||_______||_|   |_|\n";
    std::cout << "\n";

    SetConsoleTextAttribute(hConsole, 7);
    std::cout << "You have entered a monster room!" << std::endl;
    std::this_thread::sleep_for(chrono::seconds(2));
    // Implement monster encounter logic here
}

void MonsterRoom::displayRoomInfo() const
{
    std::cout << "You have entered the monster room!" << std::endl;
}
