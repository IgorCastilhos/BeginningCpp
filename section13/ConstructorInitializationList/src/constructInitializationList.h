//
// Created by igorc on 20/12/2023.
//

#ifndef BEGINNINGCPPPROGRAMMING_CONSTRUCTINITIALIZATIONLIST_H
#define BEGINNINGCPPPROGRAMMING_CONSTRUCTINITIALIZATIONLIST_H

#include <utility>

#include "string"
#include "iostream"

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    // Overloaded Constructors
    Player();

    explicit Player(string name_val);

    Player(string name_val, int health_val, int xp_val);
};

Player::Player()
        : Player{"None", 0, 0} {
    cout << "No args constructor" << endl;
}


Player::Player(string name_val)
        : Player{std::move(name_val),0,0} {
    cout << "One arg constructor" << endl;
}


Player::Player(string name_val, int health_val, int xp_val)
        : name{std::move(name_val)}, health{health_val}, xp{xp_val} {
    cout << "Three args constructor" << endl;
}

#endif //BEGINNINGCPPPROGRAMMING_CONSTRUCTINITIALIZATIONLIST_H
