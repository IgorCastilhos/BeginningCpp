//
// Created by igorc on 20/12/2023.
//
#include "iostream"
#include "string"

#ifndef BEGINNINGCPPPROGRAMMING_ACCESSMODIFIERS_H
#define BEGINNINGCPPPROGRAMMING_ACCESSMODIFIERS_H


class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    void talk(std::string text_to_say) { std::cout << name << " says " << text_to_say << std::endl; }

    bool is_dead();
};


#endif //BEGINNINGCPPPROGRAMMING_ACCESSMODIFIERS_H
