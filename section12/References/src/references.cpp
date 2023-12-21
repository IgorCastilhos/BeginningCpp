#include "iostream"
#include "vector"

using namespace std;

int main() {
    int num{100};
    int &ref{num};

    cout << num << '\n';
    cout << ref << '\n';

    num = 200;
    cout << "\n-----------------------" << '\n';
    cout << num << '\n';
    cout << ref << '\n';

    ref = 300;
    cout << "\n-----------------------" << '\n';
    cout << num << '\n';
    cout << ref << '\n';

    cout << "\n-----------------------" << '\n';
    vector<string> stooges{"Larry", "Moe", "Curly"};

    for (auto str: stooges) {
        str = "Funny";              // str is a COPY of each vector element
    }

    for (auto str: stooges) {
        cout << str << '\n';
    }

    cout << "\n-----------------------" << '\n';
    for (auto &str: stooges) {
        str = "Funny";
    }
    for (const auto& str: stooges) {
        cout << str << '\n';
    }

    return 0;
}