#include"ClapTrap.hpp"

ClapTrap::ClapTrap(){

    std::cout << "default constructor called " << std::endl;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attakDamage = 0;
}
ClapTrap:: ClapTrap(std::string n ) {
    std::cout << "claptrap " << n << " constractor called " << std::endl;
    this->name = n;
    hitPoint = 10;
    energyPoint = 10;
    attakDamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "copy constructor called " << std::endl;
    *this = other;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    
    std::cout << "copy assignment called " << std::endl;
    this->name  = other.name;
    this->hitPoint = other.hitPoint;
    this->energyPoint = other.energyPoint;
    this->attakDamage = other.attakDamage;
    return *this;
}
ClapTrap::~ClapTrap() {
    std::cout << "destructor Called " << std::endl;
}

 void ClapTrap::attack(const std::string& target) {
    if (this->energyPoint <= 0)
        {
            std::cout << "ClapTrap " << name << " had no energy and can't attack" << std::endl;
            return; 
        }
    if (this->hitPoint <= 0)
        {
            std::cout << "ClapTrap " << name << " Already dead so he cant attack " << std::endl;
            return; 
        }
    
    this->energyPoint--;
    std::cout   << "ClapTrap " << this->name << " attack " 
                << target << " causing " << this->attakDamage << " points of damage " << std::endl;

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
    if (this->energyPoint <= 0)
        {
            std::cout << "ClapTrap " << name << "had no energy and can't be repaired " << std::endl;
            return; 
        }
    if (this->hitPoint <= 0)
        {
            std::cout << "ClapTrap " << name << " already dead and can't be repaired " << std::endl;
            return; 
        }
    this->hitPoint += amount;
    this->energyPoint--;
    std::cout   << "ClapTrap " << this->name << " is repaired by " << amount 
                << " and HP = " << this->hitPoint << std::endl;

 }
