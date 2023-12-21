// section 7
// Created by igorc on 23/11/2023.
// Arrays
#include "iostream"
using namespace std;

int main()
{
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << '\n';
    cout << "\nThe last vowel is: " << vowels[4] << '\n';

    // cin >> vowels[5]; out of bounds - don't do this!

    double hi_temps[] { 90.1, 88.8, 77.6, 81.2};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7; // Set the first element in hi_temps to 100.7

    cout << "The first high temperature is: " << hi_temps[0] << endl;
//

    int test_scores[]{1, 2, 3, 4, 5};

    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\nThe updated array is:" << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << test_scores << endl;
    int arr [10] {0};
    arr[0] = 100;
    arr[9] = 1000; 
 return 0;

}