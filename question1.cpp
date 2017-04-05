#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
// Fill in the code to define an integer variable called selection
int selection ;
cout << "Please enter the choice of hot dog "
<< "(a number from 1 to 4 or 0 to quit) " << endl;
cout << "Hot Dog Menu " << endl << endl;
cout << "1: Plain hotdog " << endl;
cout << "2: Chilli hotdog " << endl;
cout << "3: Cheese hotdog " << endl;
cout << "4: Russian hotdog " << endl;
cout << "0: QUIT " << endl <<endl << endl;
cin >> selection ;
while (selection < 1 || selection > 4) //complete the condition
{
cout << "Invalid choice - Please re-enter ";
cin >> selection;
}
cout << "You have selected option number " << selection << endl;
cout << "How many hotdogs would you like?" << endl;
int number;
cin >> number;
// Fill in the code to read in number
float cost;
// Fill in the code to begin a switch statement
// that is controlled by selection
switch (selection)
{
case 1: cost = number * 15.0 ;
cout << "The total cost is R " << cost << endl;
break;
// Fill in the code for the case chilli hotdog ( R12.50 each)
case 2: cost = number * 12.5;
cout << "The total cost is R " << cost << endl;
break;
// Fill in the code for the case chesse hotdog (R17.00 each)
case 3: cost = number * 17.0;
cout << "The total cost is R " << cost << endl;
break;
// Fill in the code for the case Russian hotdog (R22.50 each)
case 4: cost = number * 22.5;
cout << "The total cost is R " << cost << endl;
break;
case 0: cout << " Please come again" << endl;
break;
default:
cout << "Invalid selection";
cout << " Try again please" << endl;
}
return 0;
}
