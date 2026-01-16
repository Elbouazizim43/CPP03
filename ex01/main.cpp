#include "ScavTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== Creating ClapTrap ===" << std::endl;
    ClapTrap clap("CL4P-TP");
    std::cout << std::endl;

    std::cout << "=== Creating ScavTrap ===" << std::endl;
    ScavTrap scav("SC4V-TP");
    std::cout << std::endl;

    std::cout << "=== Testing ClapTrap attacks ===" << std::endl;
    clap.attack("target1");
    clap.attack("target2");
    std::cout << std::endl;

    std::cout << "=== Testing ScavTrap attacks ===" << std::endl;
    scav.attack("enemy1");
    scav.attack("enemy2");
    std::cout << std::endl;

    std::cout << "=== Testing takeDamage ===" << std::endl;
    clap.takeDamage(5);
    scav.takeDamage(30);
    std::cout << std::endl;

    std::cout << "=== Testing beRepaired ===" << std::endl;
    clap.beRepaired(3);
    scav.beRepaired(20);
    std::cout << std::endl;

    std::cout << "=== Testing guardGate ===" << std::endl;
    scav.guardGate();
    std::cout << std::endl;

    std::cout << "=== Testing copy constructor ===" << std::endl;
    ScavTrap scavCopy(scav);
    scavCopy.attack("copy_target");
    std::cout << std::endl;

    std::cout << "=== Testing assignment operator ===" << std::endl;
    ScavTrap scavAssign("Assigned");
    scavAssign = scav;
    scavAssign.attack("assigned_target");
    std::cout << std::endl;

    std::cout << "=== Testing edge cases ===" << std::endl;
    ClapTrap weakClap("Weak");
    weakClap.takeDamage(10); // Should have 0 HP
    weakClap.attack("target"); // Should not be able to attack
    weakClap.beRepaired(5); // Should not be able to repair
    std::cout << std::endl;

    std::cout << "=== Testing energy depletion ===" << std::endl;
    ClapTrap energyTest("EnergyTester");
    for (int i = 0; i < 11; i++) {
        energyTest.attack("target");
    }
    std::cout << std::endl;

    std::cout << "=== Destructors will be called ===" << std::endl;
    return 0;
}
