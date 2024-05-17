#include <iostream>

#include "exercise.h"

void Print_Player_Location (const PlayerData &Player){

    std::cout << "Spieler mit der ID: " << Player.id << " steht an: " << "\n";
    std::cout << "    x-Pos.: " << Player.x_pos << " / y-Pos.: " << Player.y_pos << "\n";

}
