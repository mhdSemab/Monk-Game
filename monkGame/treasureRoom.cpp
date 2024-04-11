#include "pch.h"
#include "treasureRoom.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <windows.h>

void TreasureRoom::enter(Entity& entity) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 14);
    system("cls");

    std::cout << " _______  ______    _______  _______  _______  __   __  ______    _______    ______    _______  _______  __   __ \n";
    std::cout << "|       ||    _ |  |       ||   _   ||       ||  | |  ||    _ |  |       |  |    _ |  |       ||       ||  |_|  |\n";
    std::cout << "|_     _||   | ||  |    ___||  |_|  ||  _____||  | |  ||   | ||  |    ___|  |   | ||  |   _   ||   _   ||       |\n";
    std::cout << "  |   |  |   |_||_ |   |___ |       || |_____ |  |_|  ||   |_||_ |   |___   |   |_||_ |  | |  ||  | |  ||       |\n";
    std::cout << "  |   |  |    __  ||    ___||       ||_____  ||       ||    __  ||    ___|  |    __  ||  |_|  ||  |_|  ||       |\n";
    std::cout << "  |   |  |   |  | ||   |___ |   _   | _____| ||       ||   |  | ||   |___   |   |  | ||       ||       || ||_|| |\n";
    std::cout << "  |___|  |___|  |_||_______||__| |__||_______||_______||___|  |_||_______|  |___|  |_||_______||_______||_|   |_|\n";

    std::cout << "\n";
    
    SetConsoleTextAttribute(hConsole, 7);
    std::cout << "\n" << std::endl;
    std::cout << "You have entered a treasure room!" << std::endl;
    std::cout << "You have won the game!" << std::endl;
    std::this_thread::sleep_for(chrono::seconds(2));
    exit(0);
    // Implement treasure collection logic here
}


void TreasureRoom::displayRoomInfo() const
{
    std::cout << "You have entered the treasure room! You win!" << std::endl;
}
