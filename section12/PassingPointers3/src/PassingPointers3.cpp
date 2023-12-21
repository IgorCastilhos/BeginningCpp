//
// Created by igorc on 19/12/2023.
//
#include "iostream"
#include "string"
#include "vector"

using namespace std;

void display(const vector<string> *v);

void display(int *array, int sentinel);

void display(const vector<string> *const v) {
//    (*v).at(0) = "Funny";
    for (const auto &str: *v) {
        cout << str << "";
        cout << '\n';
    }
//    v = nullptr;
}

void display(int *array, int sentinel) {
    while (*array != sentinel) {
        cout << *array++ << "";
        cout << '\n';
    }
}


int main() {
//    cout << "-----------------------" << '\n';
//    vector<string> stooges{"Larry", "Moe", "Curly"};
//    display(&stooges);

    cout << "-----------------------" << '\n';
    int scores[]{100, 98, 97, 79, 85, -1};
    display(scores, -1);

    cout << '\n';
    return 0;
}