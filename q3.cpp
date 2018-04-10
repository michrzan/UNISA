#include <iostream>

using namespace std;
int main()
{
int items_sold;
int printHeading();
printHeading();
cout << "Please input the number of items sold" << endl;
cin >> items_sold;
cout << "The amount pay due is R" << items_sold * 12.5;
return 0;
}


int printHeading()
{
cout << "***************************************************" << endl;
cout << "GOLDEN SALES COMPANY" << endl;
cout << "This program inputs the number of items sold by a" << endl;
cout << "Salesperson and prints the amount of pay due." << endl;
cout << "***************************************************" << endl;
return 0;
}
