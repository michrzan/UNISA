#include <iostream>

using namespace std;
int main()
{
int no_of_experiments = 4;
int no_of_resutls_per_experiment = 5;
float single_result = 0.0;
float total_for_the_experiment = 0.0;
int i,j;

for (i = 1; i <= no_of_experiments; i++)
{
    cout << "Experiment number " << i << " : " << endl;

    for (j = 1; j <= no_of_resutls_per_experiment; j++)
    {
        cout << "Please provide result number " << j << " of the experiment number " << i << " : " ;
        cin >> single_result;
        total_for_the_experiment += single_result;
    }
    cout << "The average result for experiment number " << i << " was: " << total_for_the_experiment / no_of_resutls_per_experiment << endl;
    total_for_the_experiment = 0.0;
    cout << endl ;
    cout << endl ;
}


return 0;
}
