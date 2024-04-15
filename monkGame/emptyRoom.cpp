#include "pch.h"
#include "emptyRoom.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <chrono>
#include <thread>

// Function to handle the entity entering the room
void EmptyRoom::enter(Entity& entity) {
    displayRoomInfo();

    // Check if the entity's health is not full
    if (entity.getHealth() != 15) {
        std::cout << entity.getName() << "'s health is not full..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(3));
        std::cout << "Choose your action (1: Pray to get back to full health, Any other number: Move onto next room): ";
        int action;
        int tempHealth;
        std::cin >> action;

        // If the entity chooses to pray
        if (action == 1) {
            // Increase the entity's health until it is full
            while (entity.getHealth() != 15) {
                tempHealth = entity.getHealth() + 1;
                entity.setHealth(tempHealth);
                std::cout << entity.getName() << " is praying. Health increased to " << entity.getHealth() << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(3));
            }
            std::cout << "You have reached max health." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(3));
            std::cout << "Moving you to the next room..." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }
        // If the entity chooses to move to the next room
        else {
            std::cout << "Moving you to the next room..." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }
    }
    // If the entity's health is full
    else {
        std::cout << entity.getName() << "'s health is full! Moving you to the next room..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }
}

// Function to display the room information
void EmptyRoom::displayRoomInfo() const {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 5);
    system("cls");

    // Display the room banner
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
    std::this_thread::sleep_for(std::chrono::seconds(2));
}
