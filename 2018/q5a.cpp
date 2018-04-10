#include <iostream>

using namespace std;
int main()
{
int a, b;
cout << "Provide base: ";
cin >> a;
cout << endl;
cout << "Provide exponent: ";
cin >> b;
cout << endl;
int integerpower(int base, int exponent);
cout << "The result is: " << integerpower(a,b);
return 0;
}

int integerpower(int base, int exponent)
{
    int result = 1;
    int i;
    for (i = 1; i <= exponent; i++)
    {
        result *= base;
    }
    return result;
}
