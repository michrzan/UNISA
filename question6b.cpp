#include <iostream>
#include <cmath>
using namespace std;

float calculate_discount_for_p_and_s(string type, string pop)
{
    if ("yes" == pop)
    {return 0.2 * 80;}
    else if ("no" == pop)
    {return 0.1 * 80;}
    else
    {return 0;}
}

float calculate_discount_for_o(string type, string pop)
{
    if ("yes" == pop)
    {return 0.05 * 80;}
    else
    {return 0;}
}

int main ()
{
    string type;
    string pop;

    cout << "Please type p for pensioner, s for student, o for other" << endl;
    cin >> type ;
    cout << "Did the person buy popcorn? Type yes or no" << endl;
    cin >> pop ;

    float discount;

    if ("s" == type || "p" == type)
    {
        discount = calculate_discount_for_p_and_s(type, pop);
    }
    else
    {
        discount = calculate_discount_for_o(type,pop);
    }

    cout << "Discount is: " << discount << endl;
    cout << "The total due amount is: R" << 80-discount;
    return 0;
}
