#include <iostream>
using namespace std;
const int LIMIT = 10;
int main ()
{
 int counter;
 int number;
 int zeros = 0;
 int odds = 0;
 int evens = 0;
 cout << "Please enter " << LIMIT << " integers, " << "positive, negative, or zeros." << endl;
 cout << "The numbers you entered are:" << endl;
 for (counter = 1; counter <= LIMIT; counter++)
 {
 cin >> number;
 if (number == 0)
    zeros++;
 switch (number % 2)
 {
 case 0:
     evens++;
     break;
 case 1:
     odds++;
     break;
 }
 }
 cout << endl;
 cout << "There are " << evens << " evens, "
 << "which includes " << zeros << " zeros."
 << endl;
 cout << "The number of odd numbers is: " << odds
 << endl;
 return 0;
}
