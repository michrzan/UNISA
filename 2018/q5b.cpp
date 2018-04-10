#include <iostream>
#include <string>
using namespace std;
int main()
{
char a,b;
char isEqual(char a, char b);

cout << "Provide 1st character: ";
cin >> a;
cout << endl;
cout << "Provide 2nd character: ";
cin >> b;
cout <<endl;
//cout << isEqual(a, b);
string tr ;//= "P";
tr = isEqual(a, b) ? "true" : "false";
cout << "The characters entered are the same: " << tr;
return 0;
}

bool isEqual(char a, char b)
{
return a==b;
}
