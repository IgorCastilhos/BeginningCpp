//
// Created by igorc on 20/12/2023.
//
#include <utility>

#include "iostream"
#include "string"

#ifndef BEGINNINGCPPPROGRAMMING_DEFAULTCONSTRUCTORPARAMETERS_H
#define BEGINNINGCPPPROGRAMMING_DEFAULTCONSTRUCTORPARAMETERS_H


class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    explicit Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};

Player ::Player(std::string name_val, int health_val, int xp_val)
: name{std::move(name_val)}, health{health_val},xp{xp_val}{
    std::cout << "Three-args constructor" << std::endl;
}

#endif //BEGINNINGCPPPROGRAMMING_DEFAULTCONSTRUCTORPARAMETERS_H
