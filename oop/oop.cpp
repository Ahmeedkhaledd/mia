#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Character {
protected:
    string name;
    int health;
    int energy;

public:
    Character(string n, int h, int e) : name(n), health(h), energy(e) {}

    virtual void attack(Character &opponent) = 0;

    void takeDamage(int damage) {
        health -= damage;
        if (health < 0) health = 0;
    }

    bool isAlive() const {
        return health > 0;
    }

    string getName() const {
        return name;
    }

    int getHealth() const {
        return health;
    }
};

class Batman : public Character {
public:
    Batman() : Character("Batman", 100, 500) {}

    void attack(Character &opponent) override {
        int choice = rand() % 4;
        int damage = 0;
        string weapon;

        switch (choice) {
            case 0:
                weapon = "Batarang";
                damage = 11;
                energy -= 50;
                break;
            case 1:
                weapon = "Grapple Gun";
                damage = 18;
                energy -= 88;
                break;
            case 2:
                weapon = "Explosive Gel";
                damage = 10;
                energy -= 92;
                // Reduces opponent's next attack by 20%
                break;
            case 3:
                weapon = "Batclaw";
                damage = 20;
                energy -= 120;
                break;
        }

        opponent.takeDamage(damage);
        cout << name << " attacks with " << weapon << " causing " << damage
             << " damage. " << opponent.getName() << " has " << opponent.getHealth() << " health remaining.\n";
    }
};

class Joker : public Character {
public:
    Joker() : Character("Joker", 100, 500) {}

    void attack(Character &opponent) override {
        int choice = rand() % 3;
        int damage = 0;
        string weapon;

        switch (choice) {
            case 0:
                weapon = "Joy Buzzer";
                damage = 8;
                energy -= 40;
                break;
            case 1:
                weapon = "Laughing Gas";
                damage = 13;
                energy -= 56;
                break;
            case 2:
                weapon = "Acid Flower";
                damage = 22;
                energy -= 100;
                break;
        }

        opponent.takeDamage(damage);
        cout << name << " attacks with " << weapon << " causing " << damage
             << " damage. " << opponent.getName() << " has " << opponent.getHealth() << " health remaining.\n";
    }
};

int main() {
    Batman batman;
    Joker joker;

    cout << "The fight begins between Batman and Joker!\n\n";

    while (batman.isAlive() && joker.isAlive()) {
        batman.attack(joker);
        if (joker.isAlive()) {
            joker.attack(batman);
        }
    }

    if (batman.isAlive()) {
        cout << "\nBatman wins the battle!\n";
    } else {
        cout << "\nJoker wins the battle!\n";
    }

    return 0;
}