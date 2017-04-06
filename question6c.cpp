#include <iostream>
#include <cmath>
using namespace std;

string getName()
{
    string firstname, lastname, fullname;
    cout << "Provide first name: " << endl;
    cin >> firstname;
    cout << "Provide last name: " << endl;
    cin >> lastname;
    fullname = firstname + lastname;
    return fullname;
    }

float getHours(string fullname, float rate)
{
    int hours;
    int tot_hours = 0;

    for (int day = 1; day <8; day++)
    {
        cout << "Proivde number of hours worked on the day number " << day << " :" << endl;
        cin >> hours;
        tot_hours =+ hours;
    }
    if (tot_hours > 40)
    {
        return 1.1 * tot_hours * rate;
    }
    else
    {
        return 0.9 * tot_hours * rate;
    }
}

int main()
{
    float the_rate;
    string the_name = getName();
    cout << "Provide pay rate: " << endl;
    cin >> the_rate ;
    cout << "The total pay was: " << getHours(the_name, the_rate);
    return 0;
}


