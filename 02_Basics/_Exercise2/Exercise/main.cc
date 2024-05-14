#include <cstdint>
#include <iostream>

void super_duper_example(const std::uint16_t input)
{
    static std::uint16_t counter = 0;
    static constexpr std::uint16_t resetter = 10;

    if (input == resetter){
        counter = 0;
    }
    else if (input % 2 == 0){

        counter++;

    }

    std::cout << counter << std::endl;

}

int main()
{
    std::uint16_t input = 0;

    while (true){
    std::cout << "Please input an Integer: ";
    std::cin >>  input;

    super_duper_example(input);
    }

    return 0;
}
