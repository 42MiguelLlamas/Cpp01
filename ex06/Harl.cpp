#include "Harl.hpp"

Harl:: Harl()
{
    std::cout << "Harl has arrived" << std::endl;
};

Harl:: ~Harl()
{
    std::cout << "Harl has left." << std::endl;
};

void Harl::debug()
{
    std::cout << "[DEBUG]   ---Debug message" << std::endl;
};
void Harl::info()
{
    std::cout << "[INFO]    ---Info message" << std::endl;
};
void Harl::warning()
{
    std::cout << "[WARNING] ---Warning message" << std::endl;
};

void Harl::error()
{
    std::cout << "[ERROR]   ---Error message" << std::endl;
};


void Harl::complain(std::string level)
{
    function_p functions[4] = {&Harl::debug, &Harl::info, &Harl::warning,  &Harl::error};
    int leveln = 4;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && leveln == 4)
    {
        if (level == levels[i])
            leveln = i;
        i++;
    }
    (this->*(functions[leveln]))();
};