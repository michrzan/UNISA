#include <iostream>
#include <iomanip>
using namespace std;

int main(){

int next = 2, sum = 0;
while (next <= 5)
{

sum += next;
next++;
}
cout << "The sum of 2 through 5 is " << sum << endl;
}
