#include <iostream>

using namespace std;
int main()
{
    int age;
    int  finalMark;
cout << "Enter age: ";
cin >> age;
cout << "Enter final mark for exam: ";
cin >> finalMark;
while (age >= 30 || finalMark < 65) //complete the condition
{
cout << "Please provide details of a candidate younger than 30 with a final mark of more than 65%: " << endl;
cout << "Enter age: ";
cin >> age;
cout << "Enter final mark for exam: ";
cin >> finalMark;
}
cout << "Candidate accepted";
return 0;
}
