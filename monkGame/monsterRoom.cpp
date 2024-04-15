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
#include <string>

int MonsterRoom::getValidInput()
{
    std::string input;
    int result;

    // Loop until valid input is provided
    while (true) {
        std::cout << "It's your turn. Choose your action (1: Attack, 2: Defend): ";
        std::getline(std::cin, input);

        try {
            // Attempt to convert the input string to an integer
            result = std::stoi(input);

            // Input is valid, return the integer
            return result;
        }
        catch (const std::invalid_argument& e) {
            std::cout << "Invalid input. Please enter an integer only." << std::endl;
        }
        catch (const std::out_of_range& e) {
            std::cout << "Input out of range. Please enter a smaller integer." << std::endl;
        }
    }
}

void MonsterRoom::enter(Entity& entity) {
    displayRoomInfo();
    std::cout << "You have entered a monster room!" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    // Handle monster interaction
    Player& player = dynamic_cast<Player&>(entity);
    // Initialize a new Monster instance
    Monster monster("Goblin", 10, 2); // Adjust parameters as needed
    // Handle monster interaction with the newly created monster instance
    handleMonsterInteraction(player, monster);
    // Wait for a few seconds
    std::this_thread::sleep_for(std::chrono::seconds(3));
}


void MonsterRoom::handleMonsterInteraction(Player& player, Monster& monster) {

    std::cout << "A fierce monster appears!" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "It's a ..." << monster.getName() << "!" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Get ready to fight!" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    int numMoves = 0;
    while (player.isAlive() && monster.isAlive()) {
        numMoves++;
        // Player's turn
        system("cls");
        displayRoomInfo();

        std::cout << "------------------------------------" << std::endl;
        std::cout << "Moves counter: " << numMoves << std::endl;
        std::cout << player.getName() << " health is: " << player.getHealth() << std::endl;
        std::cout << monster.getName() << " health is: " << monster.getHealth() << std::endl;
        std::cout << "------------------------------------" << std::endl;

        int action;
        //std::cin >> action;
        do {
            action = getValidInput();
            //std::cout << "It's your turn, " << player.getName() << ". Choose your action (1: Attack, 2: Defend): ";
            //std::cin >> action;
            if (action != 1 && action != 2) {
                std::cout << "Invalid action. Please enter 1 or 2." << std::endl;
            }

        } while (action != 1 && action != 2);

        if (player.isSuccessful()) {
            if (action == 1) {
                player.attack(monster);
                std::this_thread::sleep_for(std::chrono::seconds(3));
            }
            else if (action == 2) {
                player.defend();
                std::this_thread::sleep_for(std::chrono::seconds(3));
            }
            else {
                std::cout << "Invalid action. You lose your turn." << std::endl;
            }

            if (monster.isAlive() == 0) {
                break;
            }
        }
        
        else {
            std::cout << player.getName() << "'s move was unsuccessful." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }

        // Monster's turn
        if (monster.isAlive() && monster.isSuccessful()) {
            int monsterAction = rand() % 2; // 0 for attack, 1 for defend

            if (monsterAction == 0) {
                std::cout << monster.getName() << " has decided to attack!" << std::endl;
                monster.attack(player);
                std::this_thread::sleep_for(std::chrono::seconds(3));
            }
            else {
                std::cout << monster.getName() << " has decided to defend!" << std::endl;
                monster.defend();
                std::this_thread::sleep_for(std::chrono::seconds(3));
            }

            if (player.isAlive() == 0) {
                break;
            }
        }

        else {
            std::cout << monster.getName() << "'s move was unsuccessful." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }

    }

    // Determine the outcome of the battle
    if (player.isAlive()) {
        std::cout << "You defeated the monster! Congratulations!" << std::endl;
        std::cout << "Sending you to the next room..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }
    else {
        std::cout << "You were defeated by the monster. Game over!" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(3));
        exit(0);
    }
}





void MonsterRoom::displayRoomInfo() const
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 12);
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
    std::this_thread::sleep_for(std::chrono::seconds(2));
}
