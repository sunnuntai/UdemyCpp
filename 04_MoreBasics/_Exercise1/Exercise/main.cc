#include <iostream>

#include "exercise.h"

int main()
{

    PlayerData Jupp = {1, 10, 0, 100, 50, Team::ENEMY};
    PlayerData Flupp = {2, 0, 50, 30, 100, Team::ALLIED};

    Print_Player_Location(Jupp);
    Print_Player_Location(Flupp);


    return 0;
}
