#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "Uruk-hai";
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