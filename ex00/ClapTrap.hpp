#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>


class ClapTrap {
private:
    std::string name;
    int hitPoint;
    int energyPoint;
    int attakDamage;
public:

    ClapTrap (std::string name );
    ClapTrap ();
    ClapTrap (const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap ();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};


#endif