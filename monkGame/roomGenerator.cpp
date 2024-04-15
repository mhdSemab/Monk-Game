#include "pch.h"
#include "roomGenerator.h"
#include "player.h"
#include "monster.h"
#include <random>
#include <algorithm>

// Avoid using namespace std to prevent namespace pollution

// Function to generate rooms based on specified numbers of empty, monster, and treasure rooms
std::vector<Room*> generateRooms(int numEmptyRooms, int numMonsterRooms, int numTreasureRooms) {
    std::vector<Room*> rooms;

    // Random number generation setup
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 3);

    // Creating player and monster instances
    Player player("Works", "Player", 20, 5);
    Monster monster("Monster", 15, 3);

    // Generating empty rooms
    for (int i = 0; i < numEmptyRooms; ++i) {
        rooms.push_back(new EmptyRoom());
    }

    // Generating monster rooms
    for (int i = 0; i < numMonsterRooms; ++i) {
        rooms.push_back(new MonsterRoom(player, monster));
    }

    // Shuffling the rooms
    std::shuffle(rooms.begin(), rooms.end(), gen);

    // Generating treasure rooms
    // Ensures treasure room is always last
    for (int i = 0; i < numTreasureRooms; ++i) {
        rooms.push_back(new TreasureRoom());
    }

    return rooms;
}
