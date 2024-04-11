#include "pch.h"
#include "emptyRoom.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <chrono>
#include <thread>

void EmptyRoom::enter(Entity& entity) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 5);
    system("cls");


    std::cout << "_______  __   __  _______  _______  __   __    ______    _______  _______  __   __ \n";
    std::cout << "|       ||  |_|  ||       ||       ||  | |  |  |    _ |  |       ||       ||  |_|  |\n";
    std::cout << "|    ___||       ||    _  ||_     _||  |_|  |  |   | ||  |   _   ||   _   ||       |\n";
    std::cout << "|   |___ |       ||   |_| |  |   |  |       |  |   |_||_ |  | |  ||  | |  ||       |\n";
    std::cout << "|    ___||       ||    ___|  |   |  |_     _|  |    __  ||  |_|  ||  |_|  ||       |\n";
    std::cout << "|   |___ | ||_|| ||   |      |   |    |   |    |   |  | ||       ||       || ||_|| |\n";
    std::cout << "|_______||_|   |_||___|      |___|    |___|    |___|  |_||_______||_______||_|   |_|\n";
    std::cout << "\n";

    SetConsoleTextAttribute(hConsole, 7);
    std::cout << "You have entered an empty room!" << std::endl;
    // Implement any specific logic for empty rooms here
    std::this_thread::sleep_for(chrono::seconds(2));
    
}

void EmptyRoom::displayRoomInfo() const {
    std::cout << "You have entered an empty room!" << std::endl;
}
