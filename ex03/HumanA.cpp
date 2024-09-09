#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : name(n), weap(w)
{
};

HumanA::~HumanA()
{

};

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weap.getType() << std::endl;
};