#include <iostream>
#include <time.h>
using namespace std;

int main(void)
{

    int dice1, dice2, sum = 0;
    int dice[13] = { 0 };

    // generate a random number
    srand(time(NULL));

    // create loop
    for (int i = 1; i <= 36000; i++)
    {
    dice1 = 1 + rand() % 6;
    dice2 = 1 + rand() % 6;
    dice[dice1 + dice2]++;
    }

    cout << "Sum Total" << endl;

    //print the end results
    for (int i = 2; i <= 12; i++)
    {
    cout << i << " " << dice[i] << endl;
    sum = sum += dice[i];
    }

    cout << "\nTotal number of rolls is " << sum << endl;
    return 0;
}