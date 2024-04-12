#include "pch.h"
#include "monsterRoom.h"
#include "player.h"
#include "entity.h"
#include "monster.h"
#include <iostream>
#include <thread>
#include <cstdlib>
#include <chrono>
#include <Windows.h>

void MonsterRoom::enter(Entity& entity) {
    // Handle monster interaction
    Player& player = dynamic_cast<Player&>(entity);
    // Initialize a new Monster instance
    Monster monster("Goblin", 15, 3); // Adjust parameters as needed
    // Handle monster interaction with the newly created monster instance
    handleMonsterInteraction(player, monster);
    // Wait for a few seconds
    std::this_thread::sleep_for(std::chrono::seconds(3));
}



void MonsterRoom::handleMonsterInteraction(Player& player, Monster& monster) {
    std::cout << "A fierce monster appears! Prepare for battle!" << std::endl;
    while (player.isAlive() && monster.isAlive()) {
        // Player's turn
        //displayRoomInfo();
        std::cout << "It's your turn, " << player.getName() << ". Choose your action (1: Attack, 2: Defend): ";
        int action;
        std::cin >> action;

        if (player.isSuccessful()) {
            if (action == 1) {
                player.attack(monster);
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
            else if (action == 2) {
                player.defend();
            }
            else {
                std::cout << "Invalid action. You lose your turn." << std::endl;
            }
        }

        else {
            std::cout << "Player move was unsuccessful" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        // Monster's turn
        if (monster.isAlive() && monster.isSuccessful()) {
            int monsterAction = rand() % 2; // 0 for attack, 1 for defend

            if (monsterAction == 0) {
                std::cout << monster.getName() << " has decided to attack!" << std::endl;
                monster.attack(player);
            }
            else {
                std::cout << monster.getName() << " has decided to defend!" << std::endl;
                monster.defend();
            }
        }

        else {
            std::cout << "Monster move was unsuccessful" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        //system("cls");

    }

    // Determine the outcome of the battle
    if (player.isAlive()) {
        std::cout << "You defeated the monster! Congratulations!" << std::endl;
    }
    else {
        std::cout << "You were defeated by the monster. Game over!" << std::endl;
    }
}

void MonsterRoom::displayRoomInfo() const
{
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
    std::cout << "\n";

    SetConsoleTextAttribute(hConsole, 7);
    std::cout << "You have entered a monster room!" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
}
