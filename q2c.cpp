#include <iostream>

using namespace std;
int main()
{
int wattage, life_exp;


cout << "Please provide bulb's wattage: " ;
cin >> wattage;

switch (wattage)
{
    case 25: life_exp = 25000; break;
    case 40: life_exp = 1000; break;
    case 60: life_exp = 1000; break;
    case 75: life_exp = 750; break;
    case 100: life_exp = 750; break;

}

cout << "Expected life of the bulb is: " << life_exp;

return 0;
}
