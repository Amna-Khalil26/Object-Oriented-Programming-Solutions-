#include <iostream>
using namespace std;


class Hero {
protected:
    string name, type;
    int health;
    double power;
    int experience;

public:
    Hero(string n, string t, int h, double p, int e) {
        name = n;
        type = t;
        health = h;
        power = p;
        experience = e;
    }

  
    void showMessage() {
        cout << "\n***== Welcome to the Fantasy Battle Arena ===***\n";
        cout << "Each hero has unique attack and defense abilities.\n";
        cout << "Let the battle begin!\n\n";
    }
 
  
    virtual double attack() = 0;
    virtual double defend() = 0;

   
    void displayBasicInfo() {
        cout << "Hero Name: " << name << endl;
        cout << "Hero Type: " << type << endl;
        cout << "Health: " << health << endl;
        cout << "Power Level: " << power << endl;
        cout << "Experience: " << experience << endl;
    }
};


class Warrior : public Hero {
private:
    string weapon;
    int armor;
    double rage;

public:
    Warrior(string n, int h, double p, int e, string w, int a, double r)
        : Hero(n, "Warrior", h, p, e) {
        weapon = w;
        armor = a;
        rage = r;
    }

    double attack() override {
        return power * 1.5 + rage * 2;
    }

    double defend() override {
        return armor * 1.8 + health * 0.2;
    }

    void display() {
        displayBasicInfo();
        cout << "Weapon: " << weapon << endl;
        cout << "Armor Strength: " << armor << endl;
        cout << "Rage Level: " << rage << endl;
        cout << "Attack Value: " << attack() << endl;
        cout << "Defense Value: " << defend() << endl;
        cout << "----------------------------------\n";
    }
};


class Mage : public Hero {
private:
    string spell;
    int mana;
    double multiplier;

public:
    Mage(string n, int h, double p, int e, string s, int m, double mul)
        : Hero(n, "Mage", h, p, e) {
        spell = s;
        mana = m;
        multiplier = mul;
    }

    double attack() override {
        return power * multiplier + mana * 1.2;
    }

    double defend() override {
        return mana * 1.5 + experience * 0.5;
    }

    void display() {
        displayBasicInfo();
        cout << "Spell: " << spell << endl;
        cout << "Mana Points: " << mana << endl;
        cout << "Magic Multiplier: " << multiplier << endl;
        cout << "Attack Value: " << attack() << endl;
        cout << "Defense Value: " << defend() << endl;
        cout << "----------------------------------\n";
    }
};


class Archer : public Hero {
private:
    string bow;
    int arrows;
    double accuracy;

public:
    Archer(string n, int h, double p, int e, string b, int ar, double acc)
        : Hero(n, "Archer", h, p, e) {
        bow = b;
        arrows = ar;
        accuracy = acc;
    }

    double attack() override {
        return power * accuracy + arrows * 0.8;
    }

    double defend() override {
        return accuracy * 50 + experience * 0.3;
    }

    void display() {
        displayBasicInfo();
        cout << "Bow Type: " << bow << endl;
        cout << "Number of Arrows: " << arrows << endl;
        cout << "Accuracy Rate: " << accuracy << endl;
        cout << "Attack Value: " << attack() << endl;
        cout << "Defense Value: " << defend() << endl;
        cout << "----------------------------------\n";
    }
};


int main() {

    Warrior w("Thor", 150, 80.5, 40, "Axe", 70, 30.5);
    Mage m("Merlin", 100, 90.0, 60, "Fireball", 120, 2.5);
    Archer a("Robin", 120, 75.0, 50, "Longbow", 60, 0.9);


    w.showMessage();

    cout << "***** HERO PROFILES *****\n\n";

    w.display();
    m.display();
    a.display();

   
    cout << "\n******SUMMARY*********\n";
    cout << "Warrior is strong in defense.\n";
    cout << "Mage has powerful magic attacks.\n";
    cout << "Archer is fast and precise.\n";

    return 0;
}