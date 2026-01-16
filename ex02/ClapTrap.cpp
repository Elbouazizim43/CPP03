#include"ClapTrap.hpp"

ClapTrap:: ClapTrap(std::string n) : name(n){
    hitPoint = 10;
    energyPoint = 10;
    attackDamage = 0;
    std::cout << "claptrap " << name << " constractor called " << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
    std::cout << "copy constructor called " << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    
    this->name  = other.name;
    this->hitPoint = other.hitPoint;
    this->energyPoint = other.energyPoint;
    this->attackDamage = other.attackDamage;
    std::cout << "copy assignment called " << std::endl;
    return *this;
}
ClapTrap::~ClapTrap() {
    std::cout << "destructor Called " << std::endl;
}

 void ClapTrap::attack(const std::string& target) {
    if (this->energyPoint <= 0 || this->hitPoint <= 0)
        {
            std::cout << "ClapTrap " << name << " can't attack" << std::endl;
            return; 
        }
    this->energyPoint--;
    std::cout   << "ClapTrap " << this->name << " attack " 
                << target << " causing " << this->attackDamage << " points of damage " << std::endl;

 }
 void ClapTrap::takeDamage(unsigned int amount) {
    this->hitPoint -= amount;
    if (this->hitPoint < 0)
        this->hitPoint = 0;
    std::cout   << "ClapTrap " << this->name << " take " << amount 
                << " damage and the hitpoints = " << this->hitPoint << std::endl;

 }
 void ClapTrap::beRepaired(unsigned int amount)
 {
    if (this->energyPoint <= 0 || this->hitPoint <= 0)
        {
            std::cout << "ClapTrap " << name << " can't be repaired " << std::endl;
            return; 
        }
    this->hitPoint += amount;
    this->energyPoint--;
    std::cout   << "ClapTrap " << this->name << " is repaired by " << amount 
                << " and HP = " << this->hitPoint << std::endl;

 }
