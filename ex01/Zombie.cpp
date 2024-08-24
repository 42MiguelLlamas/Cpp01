#include "Zombie.hpp"

Zombie::Zombie()
{
};

Zombie::Zombie(std::string name)
{
    this->name = name;
};

Zombie::~Zombie()
{
    std::cout<<name<<" has been destroyed."<<std::endl;
};

void Zombie::announce(void)
{
    std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
};

void Zombie::setName(std::string n)
{
    name = n;
};