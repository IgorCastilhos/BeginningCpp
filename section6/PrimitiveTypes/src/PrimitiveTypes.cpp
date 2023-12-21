// Section 6
// Created by igorc on 21/11/2023.
// Primitive Types

#include <iostream>
using namespace std;

int main() {

    // Character type
    char middle_initial {'G'};
    cout << "My middle initial is " << middle_initial << endl;

    // Integer types
    unsigned short int exam_score {100}; // same as unsigned short exam_score {100};
    cout << "My exam score was " << exam_score << endl;

    int cities_represented {50};
    cout << "There were " << cities_represented << " cities represented in my meeting" << endl;

    long people_in_brazil {216883798};
    cout << "There are about " << people_in_brazil << " people in Brazil " << endl;

    long long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl;

    // Floatint-point types

    float car_payment {305.53};
    cout << "My car payment is " << car_payment << endl;

    double pi {3.14159};
    cout << "PI is " << pi << endl;

    long double large_amount {2.5e130};
    cout << large_amount << " is a very large number" << endl;

    // Boolean type

    bool game_over{false};
    cout << "The value of gameOver is " << game_over << endl;

    // Overflow example
    short val1 {30000};
    short val2 { 1000};
    short product {val1 * val2};

    cout << "The sum of " << val1 << " and " << val2 << " is " << product << endl;

    return 0;
}
