//
// Created by igorc on 27/11/2023.
//

#include "iostream"
using namespace std;

int main()
{
 bool wear_coat {false};
 double temperature {};
 int wind_speed {};

 cout << boolalpha;

 const int wind_speed_for_coat {40}; // wind over this value requires a coat
 const double temperature_for_coat {18}; // temperature below this value requires a coat. I'm using Celsius

 // Require a coat if either wind is too high OR temperature is too low
 cout << "\nEnter the current temperature in (C): ";
 cin >> temperature;
 cout << "\nEnter the windspeed in (kmh): ";
 cin >> wind_speed;
 wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
 cout << "\nDo you need to wear a coat using OR? " << wear_coat << endl;

 // Require a coat if BOTH the windspeed is too high AND temperature is too low
 wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
 cout << "\nDo you need to wear a coat using AND? " << wear_coat << endl;

 cout << endl;
 return 0;
}