// section 8
// Created by igorc on 27/11/2023.

#include "iostream"
using namespace std;

int main()
{
    bool equal_result {false};
    bool not_equal_result {false};

    int num1 {}, num2{};

    cout << boolalpha;

    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparision result(equals): " << equal_result << endl;
    cout << "Comparision result(not equals): " << not_equal_result << endl;

    return 0;
}
