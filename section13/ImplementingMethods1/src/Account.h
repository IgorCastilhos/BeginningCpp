//
// Created by igorc on 20/12/2023.
//

#ifndef BEGINNINGCPPPROGRAMMING_ACCOUNT_H
#define BEGINNINGCPPPROGRAMMING_ACCOUNT_H

#include <utility>
#include "string"

class Account {
private:
    std::string name;
    double balance;
public:
    void set_balance(double bal) { balance = bal; }

    double get_balance() { return balance; }

    void set_name(std::string n);

    std::string get_name();

    bool deposit(double amount);

    bool withdraw(double amount);
};

void Account::set_name(std::string n) { name = std::move(n); }

std::string Account::get_name() { return name; }

bool Account::deposit(double amount) {
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

#endif //BEGINNINGCPPPROGRAMMING_ACCOUNT_H
