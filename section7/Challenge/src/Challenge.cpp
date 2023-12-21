// section 7
// Created by igorc on 24/11/2023.
// Challenge

/*
 * Write a C++ program as follows:
 *
 * [x] Declare 2 empty vectors of integers named
 * [x] vector1 and vector 2, respectively.
 *
 * [x] Add 10 and 20 to vector1 dynamically using push_back
 * [x] Display the elements in vector1 using the at() method as well as its size using the size() method
 *
 * [x] Add 100 and 200 to vector2 dynamically using push_back
 * [x] Display the elements in vector2 using the at() method as well as its size using the size() method
 *
 * [x] Declare an empty 2D vector called vector_2d
 * Remember, that a 2D vector is a vector of vector<int>
 *
 * [x] Add vector1 to vector_2d dynamically using push_back
 * [x] Add vector2 to vector_2d dynamically using push_back
 *
 * [x] Display the elements in vector_2d using the at() method
 *
 * [x] Change  vector1.at(0) to 1000
 *
 * [x] Display the elements in vector_2d again using the at() method
 *
 * [x] Display the elements in vector1
 */

#include "iostream"
#include "vector"

using namespace std;

int main()
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "These are the elements in vector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    cout << "\nThe vector1 has: " << vector1.size() << " elements." << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nThese are the elements in vector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;

    cout << "\nThe vector2 has: " << vector2.size() << " elements.\n" << endl;
// ============================
    vector<vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    cout << endl;
    vector1.at(0) = 1000;

    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    cout << vector1.at(0);
    cout << vector1.at(1);

    cout << endl;

    return 0;
}