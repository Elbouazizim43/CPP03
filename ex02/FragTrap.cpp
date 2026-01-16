#include"FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap" << this->name << "constructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
    *this = other;
    std::cout << "FragTrap copy Constructor called" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& other) {
    ClapTrap::operator=(other);
    std::cout << "FragTrap copy assignmet called " << std::endl;
    return *this;
}
FragTrap::~FragTrap(){
    std::cout << " Fragtrap " << this->name << "destroyed" << std::endl;
}
void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap" << this->name << "has a positive high five request" << std::endl;
}
