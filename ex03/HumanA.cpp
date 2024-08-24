#include "HumanA.hpp"

HumanA::HumanA()
{
};

HumanA::HumanA(std::string n, Weapon w)
{
    this->name = n;
    this->weap = w;
};

HumanA::~HumanA()
{

};

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weap.getType() << std::endl;
};