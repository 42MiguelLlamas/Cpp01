#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl complainer;
    int leveln = 4;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    if (argc != 2)
    {
        std::cout << "ERROR: Number of arguments not valid." << std::endl;
        return (0);
    }
    while (i < 4 && leveln == 4)
    {
        if (argv[1] == levels[i])
            leveln = i;
        i++;
    }
    switch (leveln)
    {
        case 0:
            complainer.complain("DEBUG");
        case 1:
            complainer.complain("INFO");
        case 2:
            complainer.complain("WARNING");
        case 3:
            complainer.complain("ERROR");
            break;
        default:
            std::cout<<"\n----ERROR : Harl cannot do that. ---\nPlease, insert one of the following levels: \
            \n -'DEBUG'\n -'INFO'\n -'WARNING' \n -'ERROR'\n" << std::endl;
    }
    return (0);
}