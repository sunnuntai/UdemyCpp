#pragma once

enum class Team
{
    ALLIED,
    ENEMY,
};

struct PlayerData
{
    std::uint32_t id;
    float x_pos;
    float y_pos;
    std::uint32_t health;
    std::uint32_t energy;
    Team team;
};

void Print_Player_Location(const PlayerData &Player);
