#include"FragTrap.hpp"

FragTrap::FragTrap(){
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "FragTrap" << this->name << "constructor called" << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
    std::cout << "FragTrap copy Constructor called" << std::endl;
    *this = other;
}
FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap copy assignmet called " << std::endl;
    ClapTrap::operator=(other);
    return *this;
}
FragTrap::~FragTrap(){
    std::cout << " Fragtrap " << this->name << " destroyed " << std::endl;
}
void FragTrap::highFivesGuys(void){
    std::cout << " FragTrap " << this->name << " has a positive high five request " << std::endl;
}
