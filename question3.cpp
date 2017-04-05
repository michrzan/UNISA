// This program finds the average time spent programming by a student
// each day over a three day period.
#include <iostream>
using namespace std;
int main()
{
int numStudents;
float numHours, total, average;
 int student,day = 0; // these are the counters for the loops
cout << "This program will find the average number of hours a day"
 << " that a student spent programming and studying biology over a long weekend\n\n";
 cout << "How many students are there?" << endl << endl;
 cin >> numStudents;
cout << "Enter the number of days in the long weekend" << endl ;
int num_of_days;

cin >> num_of_days ;


 for( student = 1; student <= numStudents; student++)
 {
int total_prog = 0;
int total_biol = 0;

for(day = 1; day <= num_of_days; day++)
{
cout << "Please enter the number of hours spent programming by student "
<< student <<" on day " << day << "." << endl;
 cin >> numHours;
total_prog += numHours;


cout << "Please enter the number of hours spent studying biology by student "
<< student <<" on day " << day << "." << endl;
cin >> numHours;
total_biol += numHours;


}

average = total_prog / num_of_days;
cout << endl;
cout << "The average number of hours per day spent programming "
 << "by student " << student << " is " << total_prog / num_of_days
<< endl << endl ;

cout << "The average number of hours per day spent studying biology "
 << "by student " << student << " is " << total_biol / num_of_days
<< endl << endl << endl ;

if (total_biol > total_prog)
{
    cout << "This student spent more time on biology." <<  endl << endl << endl;
}
else if (total_biol < total_prog)
{
    cout << "This student spent more time on programming." <<  endl << endl << endl;
}
else
{
    cout << "This student spent equal amount of time on both subjects." <<  endl << endl    << endl;
}

}
 return 0;
}
