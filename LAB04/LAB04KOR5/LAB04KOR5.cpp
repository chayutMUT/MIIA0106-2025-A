#include <iostream>
using namespace std;
int main()
{
    srand(time(0));
    int RandomNumber = rand() % 100 + 1;
    int guess;
    int Try = 0;
    cout << " Welcome to the Number Guessing Game!" << endl;
    do
    {
        cout << " Enter the number you want to guess!: ";
        cin >> guess;
        Try++;
        if (guess != RandomNumber)
        {
            int difference = abs(guess - RandomNumber);
            if (difference <= 10)
            {
                cout << " Very close! Let's try again! " << endl;
            }
            else
            {
                cout << " That's too far! Try again! " << endl;
            }
            if (guess < RandomNumber)
            {
                cout << " You should increase the number more! " << endl;
            }
            else if (guess > RandomNumber)
            {
                cout << " You should decrease the number more! " << endl;
            }
        }
        else
        {
            cout << " Congratulations, you guessed correctly! In " << Try << " Time! " << endl;
        }
    } while (guess != RandomNumber);
    return 0;
}