//
// Created by igorc on 19/12/2023.
//
#include "iostream"
#include "string"
#include "vector"

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x{100}, y{200};
    cout << "\nx: " << x << '\n';
    cout << "y: " << y << '\n';

    swap(&x, &y);

    cout << "\nx: " << x << '\n';
    cout << "y: " << y << '\n';

    cout << '\n';
    return 0;
}