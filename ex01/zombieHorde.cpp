#include "Zombie.hpp"
#include <stdio.h>

Zombie *zombieHorde(int a, std::string name)
{
    Zombie *man = new Zombie[a];

    for (int i =  0; i < a; i++)
        man[i].setName(name);
    return (man);
};