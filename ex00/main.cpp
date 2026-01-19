#include"ClapTrap.hpp"

int main() {
    ClapTrap a("Mohammed");

    a.attack("Enemy");
    a.takeDamage(4);
    a.beRepaired(4294967295);
    a.attack("Boss");
    a.takeDamage(20);
    a.beRepaired(5);

    return 0;
}
