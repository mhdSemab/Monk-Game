// monkGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "emptyRoom.h"
#include "monsterRoom.h"
#include "treasureRoom.h"


int main()
{
    cout << "Hello World!\n";

    emptyRoom empRoom;
    monsterRoom monRoom;
    treasureRoom teaRoom;

    //entering each room
    empRoom.enter();
    monRoom.enter();
    teaRoom.enter();

    return 0;

}

