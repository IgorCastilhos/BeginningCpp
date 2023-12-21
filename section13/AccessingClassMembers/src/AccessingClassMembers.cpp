#include "iostream"
#include "string"

using namespace std;

class Player {
public:
    string name;
    int health;
    int xp;

    void talk(const string& text_to_say) const{ cout << name << " says " << text_to_say << '\n'; };

    bool is_dead();
};

class Account {
public:
    // attributes
    string name;
    double balance;

    // methods
    bool deposit(double bal){ balance += bal; cout << "In deposit" << endl; return false; }
    bool withdraw(double bal){balance -= bal; cout << "In withdraw" << endl; return false; }
};

int main() {
    Account igor_account;
    igor_account.name = "Igor's account";
    igor_account.balance = 5000.0;

    igor_account.deposit(1000.0);
    igor_account.withdraw(500.0);

    Player igor;
    igor.name = "Igor";
    igor.health = 100;
    igor.xp = 12;
    igor.talk("Hi there");

    Player *enemy = new Player;
    enemy->name = "Inimigo";
    enemy->health = 100;
    enemy->xp = 15;

    enemy->talk("I will attack you!");

    return 0;
}