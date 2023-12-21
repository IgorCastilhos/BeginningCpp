//
// Created by igorc on 02/12/2023.
//
#include "iostream"

using namespace std;

void swapPointers(int *ptr1, int *ptr2) {
    //-- Write your code below this line
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}

int main() {
    int scores[]{100, 95, 89, 68, -1};
    int *score_ptr{scores};

    while (*score_ptr != -1) {
        cout << *score_ptr << '\n';
        score_ptr++;
    }
    cout << "\n--------------" << '\n';

    score_ptr = scores;
    while (*score_ptr != -1)
        cout << *score_ptr++ << '\n';
    cout << "\n--------------------" << '\n';

    string s1{"Igor"};
    string s2{"Igor"};
    string s3{"Marcos"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout << boolalpha;
    cout << p1 << "==" << p2 << ": " << (p1 == p2) << '\n';     //false
    cout << p1 << "==" << p3 << ": " << (p1 == p3) << '\n';     //true

    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << '\n'; //true
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << '\n'; //true

    p3 = &s3; // point to Marcos
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << '\n'; // false
    cout << "\n--------------------" << '\n';

    char name[]{"Igor"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0]; // I
    char_ptr2 = &name[3]; // r

    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1)
         << " characters away from " << *char_ptr1 << '\n';

    cout << '\n';
    return 0;
}