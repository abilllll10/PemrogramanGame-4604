#include <iostream>

using namespace std;

class Adventurer {
public:
    int numHerbs = 5;
    int numManaPotions = 5;
    int numHealthPotions = 5;
    int swords[4] = {100, 200, 300, 400};

    int currentSwordIndex = 0;
    int healthPoints = 900;
    int manaPoints = 900;
    int damage = swords[currentSwordIndex];

    void applyHerb() {
        if (numHerbs < 1) {
            cout << "You are out of herbs." << endl;
        } else if (healthPoints >= 1000) {
            cout << "You don't need to use herbs." << endl;
        } else {
            numHerbs--;
            healthPoints += 10;
            cout << "You applied a herb. +10 HP" << endl;
        }
    }

    void applyHealthPotion() {
        if (numHealthPotions < 1) {
            cout << "You don't have any health potions left." << endl;
        } else if (healthPoints >= 1000) {
            cout << "You don't need to use health potions." << endl;
        } else {
            numHealthPotions--;
            healthPoints += 50;
            cout << "You used a health potion. +50 HP" << endl;
        }
    }

    void applyManaPotion() {
        if (numManaPotions < 1) {
            cout << "You don't have any mana potions left." << endl;
        } else if (manaPoints >= 1000) {
            cout << "You don't need to use mana potions." << endl;
        } else {
            numManaPotions--;
            manaPoints += 50;
            cout << "You used a mana potion. +50 Mana" << endl;
        }
    }

    void changeSword(int newIndex) {
        if (newIndex >= 0 && newIndex < 3) {
            currentSwordIndex = newIndex;
            damage = swords[newIndex];
            cout << "You have changed your sword." << endl;
        } else {
            cout << "Invalid sword index." << endl;
        }
    }

    void displayStats() {
        cout << "Health Points: " << healthPoints << endl;
        cout << "Mana Points: " << manaPoints << endl;
        cout << "Damage: " << damage << endl;
        cout << "Current Sword Index: " << currentSwordIndex << endl << endl;
    }

    void displayInventory() {
        cout << "=== Inventory ===" << endl;
        cout << "Herbs: " << numHerbs << endl;
        cout << "Mana Potions: " << numManaPotions << endl;
        cout << "Health Potions: " << numHealthPotions << endl << endl;
    }
};

int main() {
    Adventurer player;
    player.displayStats();
    player.displayInventory();

    player.applyHerb();
    player.applyManaPotion();
    player.applyHealthPotion();
    player.changeSword(1);

    cout << endl;

    player.displayStats();
    player.displayInventory();

    return 0;
}
