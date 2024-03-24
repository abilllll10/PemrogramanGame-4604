#include <iostream>
using namespace std;

class Warrior {
public:
    int herbs;
    int manaPotions;
    int healthPotions;
    int weapons[4];
    int equippedWeapon;
    int healthPoints;
    int manaPoints;
    int damage;

    // Constructor
    Warrior() {
        herbs = 5;
        manaPotions = 5;
        healthPotions = 5;
        weapons[0] = 100; // Blade of the Phoenix
        weapons[1] = 200; // Shadowfang
        weapons[2] = 400; // Frostbite
        weapons[3] = 600; // Doombringer
        equippedWeapon = 0;
        healthPoints = 900;
        manaPoints = 900;
        damage = weapons[equippedWeapon];
    }

    void useHerbs() {
        if (herbs > 0 && healthPoints < 1000) {
            herbs--;
            healthPoints += 10;
            cout << "You've applied herbs. Health +10." << endl;
        } else if (herbs < 1) {
            cout << "You're out of herbs." << endl;
        } else {
            cout << "No need for herbs now." << endl;
        }
    }

    void useHealthPotion() {
        if (healthPotions > 1 && healthPoints < 1000) {
            healthPotions--;
            healthPoints += 50;
            cout << "You've consumed health potion. Health +50." << endl;
        } else if (healthPotions <= 1) {
            cout << "You don't have health potion." << endl;
        } else {
            cout << "No need for health potion." << endl;
        }
    }

    void useManaPotion() {
        if (manaPotions > 1 && manaPoints < 1000) {
            manaPotions--;
            manaPoints += 50;
            cout << "You've consumed mana potion. Mana +50." << endl;
        } else if (manaPotions <= 1) {
            cout << "You don't have mana potion." << endl;
        } else {
            cout << "No need for mana potion." << endl;
        }
    }

    void changeWeapon(int a) {
        if (a >= 0 && a < 4) {
            damage = weapons[a];
            equippedWeapon = a;
            cout << "You've wielded ";
            if(a == 0) cout << "the Blade of the Phoenix.";
            else if(a == 1) cout << "the Shadowfang.";
            else if(a == 2) cout << "the Frostbite.";
            else if(a == 3) cout << "the Doombringer.";
            cout << " Damage increased: " << damage << endl;
        } else {
            cout << "Invalid weapon choice." << endl;
        }
    }

    void displayStats() {
        cout << "=== Warrior Stats ===" << endl;
        cout << "Health: " << healthPoints << endl;
        cout << "Mana: " << manaPoints << endl;
        cout << "Damage: " << damage << endl;
        cout << "Equipped Weapon: ";
        if (equippedWeapon == 0) cout << "Blade of the Phoenix" << endl;
        else if (equippedWeapon == 1) cout << "Shadowfang" << endl;
        else if (equippedWeapon == 2) cout << "Frostbite" << endl;
        else if (equippedWeapon == 3) cout << "Doombringer" << endl;
        cout << endl;
    }

    void displayInventory() {
        cout << "=== Warrior Inventory ===" << endl;
        cout << "Herbs: " << herbs << endl;
        cout << "Mana Potions: " << manaPotions << endl;
        cout << "Health Potions: " << healthPotions << endl << endl;
    }
};

int main() {
    Warrior player;
    player.displayStats();
    player.displayInventory();

    player.useHerbs();
    player.useManaPotion();
    player.useHealthPotion();

    cout << "Enter the index of the weapon you want to wield (2 - 4): ";
    int choice;
    cin >> choice;
    player.changeWeapon(choice - 1);

    cout << endl;

    player.displayStats();
    player.displayInventory();

    return 0;
}
