#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
    this->name = n;
    this->weap = 0;
};

HumanB::~HumanB()
{

};

void HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weap->getType() << std::endl;
};

void HumanB::setWeapon(Weapon &w)
{
    weap = &w;
};