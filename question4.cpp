#include <iostream>
#include <cmath>
using namespace std;
void printTabs(int start, int num_of_values, int increment = 1)
{
    cout << "NUMBER\tSQUARE\tCUBE" << endl;
    for (int i = start ; i < start + num_of_values * increment ; i += increment)
    {
        cout << i << "\t" << pow(i,2) <<  "\t" << pow(i,3) << endl;
    }

}
int main(){
    int start, num_of_values, increment;

    cout << "Enter the starting value of the table " ;
    cin >> start;
    cout << "Enter the number of values to be displayed " ;
    cin >> num_of_values ;
    cout << "Enter the increment between the values " ;
    cin >> increment ;
    cout << endl;

    printTabs(start, num_of_values, increment);
    }
