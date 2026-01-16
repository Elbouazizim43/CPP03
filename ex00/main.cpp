#include"ClapTrap.hpp"

int main() {
    ClapTrap a("Mohammed");

    a.attack("Enemy");
    a.takeDamage(5);
    a.beRepaired(3);
    a.attack("Boss");
    a.takeDamage(20);
    a.beRepaired(5);

    return 0;
}
