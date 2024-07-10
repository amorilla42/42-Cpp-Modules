#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    Weapon weapon = Weapon("MANTECA");
    HumanA juan = HumanA("JUAN", weapon);
    juan.attack();
    weapon.setType("MIERDONAZO");
    juan.attack();

    Weapon weapon2 = Weapon("CACA");
    std::cout << "Weapon2 type: " << weapon2.getType() << std::endl;
    weapon2.setType("WEONCLUIAO");
    std::cout << "Weapon2 type: " << weapon2.getType() << std::endl;
    HumanB pedro = HumanB("ETTESECH");
    pedro.attack();
    pedro.setWeapon(weapon2);
    pedro.attack();

    return 0;
}