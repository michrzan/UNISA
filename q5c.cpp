#include <iostream>

using namespace std;
void twice(int& a, int& b);
int main()
{
int a,b;

cout << "Provide 1st integer: ";
cin >> a;
cout << endl;
cout << "Provide 2nd integer: ";
cin >> b;
cout <<endl;
twice(a,b);
cout << "Your integers doubled are : " << a << " and: " << b;
return 0;
}

void twice(int& a, int& b)
{
a *= 2;
b *= 2;
}
