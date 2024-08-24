#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *man;
    man = new Zombie(name);
    return (man);
};