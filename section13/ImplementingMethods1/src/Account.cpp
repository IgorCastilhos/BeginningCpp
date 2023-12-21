#include "iostream"
#include "Account.h"

using namespace std;

int main() {
    Account igor_account;
    igor_account.set_name("Igor");
    igor_account.set_balance(1000.0);

    if (igor_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit now allowed" << endl;

    if (igor_account.withdraw(500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl;

    if (igor_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl;

    return 0;
}