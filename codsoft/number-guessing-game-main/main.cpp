#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int num()
{
    int min = 0;
    int max = 100;

    srand(time(0));

    int random_num = (rand() % max) + min;

    return random_num;
}

bool check(int &correct_number, int &x)
{
    bool correct = false;

    if (x == correct_number)
    {
        correct = true;
    }
    else if (x > correct_number)
    {
        cout << "Correct number is smaller than " << x << endl;
    }
    else if (x < correct_number)
    {
        cout << "Correct number is bigger than " << x << endl;
    }

    return correct;
}

int guess_num(int &correct_number)
{
    int x = 0;

    cout << endl
         << "Guess a number : ";
    cin >> x;

    return x;
}

int main()
{
    int random_num = num();

    cout << "You have 10 attempts to guess the number" << endl;

    int attempts = 10;
    bool correct = false;

    while (attempts > 0 && !correct)
    {
        int x = guess_num(random_num);
        correct = check(random_num, x);

        attempts--;
    }

    if (!correct)
    {
        cout << endl
             << "You lose!";
    }
    else
    {
        cout << endl
             << "You win!";
    }
}