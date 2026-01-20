#include"ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << " default construtor called " << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap" << this->name << "constructor called" << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
    std::cout << "ScavTrap copy Constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap copy assignmet called " << std::endl;
    ClapTrap::operator=(other);
    return *this;
}
ScavTrap::~ScavTrap(){
    std::cout << " Scavtrap " << this->name << "destroyed" << std::endl;
}
void ScavTrap::attack(const std::string& target) {
    if (this->energyPoint <= 0 || this->hitPoint <= 0) {
        std::cout << "ScavTrap " << name << " can't attack!" << std::endl;
        return;
    }

    this->energyPoint--;
    std::cout << "ScavTrap " << name
              << " attacks " << target
              << ", causing " << attackDamage
              << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}