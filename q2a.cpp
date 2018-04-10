#include <iostream>

using namespace std;
int main()
{
float cost_per_room;
float tax_per_room;
int num_of_rooms;
int num_of_days;
float total;
float total_per_room;
float discount;

cout << "Please enter the following:" << endl;
cout << "cost per room: ";
cin >> cost_per_room;
cout << "sales tax per room: ";
cin >> tax_per_room;
cout << "the number of rooms: ";
cin >> num_of_rooms;
cout << "number of days: ";
cin >> num_of_days;

if (num_of_rooms >= 30)
    {discount = 0.3;}
else if (num_of_rooms >= 20)
    {discount = 0.2;}
else if (num_of_rooms >= 10)
    {discount = 0.1;}
else
    {discount = 0.0;}

if (num_of_days >= 3)
    {discount += 0.05;}

total = num_of_rooms * cost_per_room * num_of_days;

cout << "The total cost for one room is R" << cost_per_room << endl;
cout << "The discount per room is " << discount * 100 << "%" << endl;
cout << "The number of rooms booked: " << num_of_rooms << endl;
cout << "The total cost of the rooms are R: " << total << endl;
cout << "The sales tax paid is : " << tax_per_room << "%" << endl;
cout << "The total cost per booking is R" << total * (1 + tax_per_room * 0.01) << endl;

return 0;
}

