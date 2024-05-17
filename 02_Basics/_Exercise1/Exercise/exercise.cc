#include <cstdint>
#include <iostream>

#include "exercise.h"

void mod_cross_sum(int I, int J)
{

    for (std::size_t i = 0; i < I; i++)
    {
        for (std::size_t j = 0; j < J; j++)
        {
            std::cout << "i: " << i << " , j:" << j
                      << " := " << (((i + j) % 2) ? "Ungerade!" : "Gerade!")
                      << std::endl;
        }
    }
}
