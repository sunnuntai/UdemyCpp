#include <cstdint>
#include <iostream>

#include "exercise.h"

// int main()
int main()
{
    int *my_data = nullptr;
    std::uint32_t size = 3;
    my_data = new int[size];

    my_data[0] = 0;
    my_data[1] = 1;
    my_data[2] = 2; // int main()

    std::cout << "Start-values of the array: " << '\n';
    for (std::uint32_t i = 0; i < size; i++)
    {
        std::cout << my_data[i] << '\n';
    }

    // Exercise 1
    // 0 1 2 12
    push_back(my_data, size, 12);
    size++;

    std::cout << "Append value 12 at the end: " << '\n';
    for (std::uint32_t i = 0; i < size; i++)
    {
        std::cout << my_data[i] << '\n';
    }

    // Exercise 2
    pop_back(my_data, size);
    size--;

    std::cout << "Remove the last value: " << '\n';
    for (std::uint32_t i = 0; i < size; i++)
    {
        std::cout << my_data[i] << '\n';
    }

    delete[] my_data;
    my_data = nullptr;

    return 0;
}
