#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    Weapon weapon = Weapon("Stick");
    HumanA humanA = HumanA("ELPEPE", weapon);
    humanA.attack();
    weapon.setType("Water");
    humanA.attack();

    Weapon weapon2 = Weapon("Soviet Heavy Tank KV-2 (Kliment Voroshilov 2) using high explosive steel fragmented ammunition model OF-530 weighing 48 kg");
    HumanB humanB = HumanB("ETTESECH");
    humanB.attack();
    humanB.setWeapon(weapon2);
    humanB.attack();

    return 0;
}