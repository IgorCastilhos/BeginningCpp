// Created by igorc on 27/11/2023.
/*
 * For this program I will be using US dollars and cents
 *
 * Write a program that asks the user to enter the following:
 * An integer representing the number of cents
 *
 * You may assume that the number of cents entered is greater than or equal to zero
 *
 * The program should then display how to provide that change to the user.
 *
 * The program should then display how to provide that change to the user.
 *
 * In the US:
 * 1 real is 100 cents
 * 1 quarter is 25 cents
 * 1 dime is 10 cents
 * 1 nickel is 5 cents, and
 * 1 penny is 1 cent
 *
 * Here is a sample run:
 *
 * Enter an amount in cents: 92
 *
 * You can provide this change as follows:
 * dollars  :0
 * quarters :3
 * dimes    :1
 * nickels  :1
 * pennies  :2
 */

#include "iostream"

using namespace std;

int main() {

  //define conversion values in cents
  const int dollar_value{100}, quarter_value{25}, dime_value{10}, nickel_value{5};

  int change_amount {};

  // Solution 1 - not using the modulo operator
  cout << "Enter an amount in cents : ";
  cin >> change_amount;

  int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

  /*
  dollars = change_amount/dollar_value;
  balance = change_amount-(dollars*dollar_value);

  quarters = balance/quarter_value;
  balance -= quarters*quarter_value;

  dimes = balance/dime_value;
  balance -= dimes*dime_value;

  nickels = balance/nickel_value;
  balance -= nickels*nickel_value;

  pennies = balance;
  */

  cout << "-----------------------";
  cout << "Solution using the modulo operator";
  cout << "-----------------------";

  balance = dollars = quarters = dimes = nickels = pennies = 0;

  dollars = change_amount/dollar_value;
  balance = change_amount%dollar_value;

  quarters = balance/quarter_value;
  balance %= quarter_value;

  dimes = balance/dime_value;
  balance %= dime_value;

  nickels = balance/nickel_value;
  balance %= nickel_value;

  pennies = balance;

  cout << "\nYou can provide this change as follows: " << endl;
  cout << "dollars :" << dollars << endl;
  cout << "quarters :" << quarters << endl;
  cout << "dimes :" << dimes << endl;
  cout << "nickels :" << nickels << endl;
  cout << "pennies :" << pennies << endl;
  cout << endl;
  return 0;
}