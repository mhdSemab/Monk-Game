#include "pch.h"
#include "treasureRoom.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <windows.h>

void TreasureRoom::enter(player& Player) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 14);
    system("cls");

    std::cout << "  _____   ____    _____      _      ____    _   _   ____    _____     ____     ___     ___    __  __   _ \n";
    std::cout << " |_   _| |  _ \\  | ____|    / \\    / ___|  | | | | |  _ \\  | ____|   |  _ \\   / _ \\   / _ \\  |  \\/  | | |\n";
    std::cout << "   | |   | |_) | |  _|     / _ \\   \\___ \\  | | | | | |_) | |  _|     | |_) | | | | | | | | | |\\/| | | |\n";
    std::cout << "   | |   |  _ <  | |___   / ___ \\   ___) | | |_| | |  _ <  | |___    |  _ <  | |_| | | |_| | |  | | |_|\n";
    std::cout << "   |_|   |_| \\_\\ |_____| /_/   \\_\\ |____/   \\___/  |_| \\_\\ |_____|   |_| \\_\\  \\___/   \\___/  |_|  |_| (_)\n";

    
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
