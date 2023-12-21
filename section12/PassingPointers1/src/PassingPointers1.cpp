//
// Created by igorc on 19/12/2023.
//
#include "iostream"

using namespace std;

void double_data(int *int_ptr);

void double_data(int *int_ptr) {
    *int_ptr *= 2;

//     *int_ptr = *int_ptr * 2;
}

int main() {
    int value{10};
    int *int_ptr{nullptr};

    cout << "Value: " << value << '\n'; // 10
    double_data(&value);
    cout << "Value: " << value << '\n'; // 20

    cout << "-------------------------" << '\n';
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << '\n';

    cout << '\n';
    return 0;

}