#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout<<"A default name has been assigned."<<std::endl;
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