#include "pch.h"
#include "emptyRoom.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <chrono>
#include <thread>

void EmptyRoom::enter(Entity& entity) {
    //entity.setHealth(9);
    displayRoomInfo();
    
    if (entity.getHealth() != 15) {
        std::cout << entity.getName() << "'s health is not full..." << std::endl;
        std::this_thread::sleep_for(chrono::seconds(3));
        std::cout << "Choose your action (1: Pray to get back to full health, Any other number: Move onto next room): ";
        int action;
        int tempHealth;
        std::cin >> action;

        if (action == 1) {
            while (entity.getHealth() != 15) {
                tempHealth = entity.getHealth() + 1;
                entity.setHealth(tempHealth);
                std::cout << entity.getName() << " is praying. Health increased to " << entity.getHealth() << std::endl;
                std::this_thread::sleep_for(chrono::seconds(3));
            }
            std::cout << "You have reached max health." << std::endl;
            std::this_thread::sleep_for(chrono::seconds(3));
            std::cout << "Moving you to the next room..." << std::endl;
            std::this_thread::sleep_for(chrono::seconds(3));
        }

        else {
            std::cout << "Moving you to the next room..." << std::endl;
            std::this_thread::sleep_for(chrono::seconds(3));
        }
    }

    else {
        std::cout << entity.getName() << "'s health is full! Moving you to the next room..." << std::endl;
        std::this_thread::sleep_for(chrono::seconds(3));
    }
    
}

void EmptyRoom::displayRoomInfo() const {
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
