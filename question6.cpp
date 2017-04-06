#include <iostream>
#include <cmath>
using namespace std;

void take_input(string & theEmployee, float & theHoursWorked, float & thePayRate)
{
    cout << "Employee name: " << endl;
    cin >> theEmployee;
    cout << "Number of hours worked: " << endl;
    cin >> theHoursWorked;
    cout << "Pay rate: " << endl;
    cin >> thePayRate;

}

float total_pay (float theHoursWorked, float thePayRate)
{
 if (theHoursWorked <= 40) {return theHoursWorked * thePayRate;}
 else {return thePayRate * (theHoursWorked * 2.5 - 60);}
}

 void printing(string theEmployee, float theHoursWorked, float thePayRate)
 {
     cout << "Pay slip for " << theEmployee << endl;
     cout << "Hours worked: " << theHoursWorked << " hours" << endl;
     cout << "Overtime hours: " << (theHoursWorked > 40 ? theHoursWorked - 40 : 0) << endl;
     cout << "Hourly pay rate: R" << thePayRate << endl;
     cout << "Pay: R" << total_pay(theHoursWorked, thePayRate) << endl << endl;
}

int main()
{
    for(int a = 0; a < 5; a++)
    {
        string theEmployee;
        float theHoursWorked;
        float thePayRate;
        take_input(theEmployee, theHoursWorked, thePayRate);
        printing(theEmployee, theHoursWorked, thePayRate);

    }

    return 0;
}
