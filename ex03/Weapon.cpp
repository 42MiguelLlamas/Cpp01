#include "Weapon.hpp"

Weapon::Weapon()
{
};

Weapon::Weapon(std::string name)
{
    this->type = name;
};

Weapon::~Weapon()
{

};
std::string Weapon::getType(void){
    return(type);
}

void Weapon::setType(std::string t)
{
    type = t;
};