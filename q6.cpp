#include <iostream>

using namespace std;

void displayOutput(double finalScore);
double calcScore(double a, double b, double c, double d, double e);
void getJudgeData(double& score);


int main()
{
double score1, score2, score3, score4, score5;
// 5 judge's scores
double finalScore;

// Call getJudgeData once for each score to be input
getJudgeData(score1);
getJudgeData(score2);
getJudgeData(score3);
getJudgeData(score4);
getJudgeData(score5);
// Call calcScore to calculate the contestant's final score
finalScore = calcScore(score1, score2, score3, score4, score5);
// Display output
displayOutput(finalScore);
return 0;
}// end of main function



void getJudgeData(double& score)
{
cout << "Please enter score: ";
cin >> score;

bool test = score <= 10.0 && score >= 0.0;

while (! test)
{
    cout << "Score incorrect. Please enter correct score: " ;
    cin >> score;
    test = score <= 10.0 && score >= 0.0;
}


}

double find_lowest(double a, double b, double c, double d, double e)
{
double minNum = a;
minNum = min(b, minNum);
minNum = min(c, minNum);
minNum = min(d, minNum);
minNum = min(e, minNum);
return minNum;
}



double find_highest(double a, double b, double c, double d, double e)
{
double maxNum = a;
maxNum = max(b, maxNum);
maxNum = max(c, maxNum);
maxNum = max(d, maxNum);
maxNum = max(e, maxNum);
return maxNum;
}

double calcScore(double a, double b, double c, double d, double e)
{
double find_highest(double a, double b, double c, double d, double e);
double find_lowest(double a, double b, double c, double d, double e);
return (a + b + c + d + e - find_highest(a, b, c, d, e) - find_lowest(a, b, c, d, e)) / 3;
}



void displayOutput(double finalScore)
{
    cout << "The final score is: " << finalScore ;
}
