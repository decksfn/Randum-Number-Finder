#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int cnt = 0;
    int number;
    int pick;
    int random = (rand() % 100000);

    int x;
back:
    printf("Would you like to pick your own number or have the computer pick one for you? (1, 2)");
    cin >> pick;
    if (pick == 2) {
        cout << "The generated number is: " << random << "\n";
        system("PAUSE");
        do {
            ++cnt;
            x = rand() % 100000;
            cout << "#" << cnt << ". " << x << '\n';

        } while (x != random);

        if (x == random) {
            cout << "Wow! The computer found its number in " << cnt << " tries!\m";
        }
    }
    else if (pick == 1) {
        cout << "Enter your own number: ";
        scanf_s("%d", &number);
    jump2:
        if (number < 0) {
            cout << "Number is too small. Enter a different number. ";
            scanf_s("%d", &number);
            goto jump2;
        }
        else if (number > 100000) {
            cout << "Number is too large. Please enter a number below 100,000. ";
            scanf_s("%d", &number);
            goto jump2;
        }
        do {
            ++cnt;
            x = rand() % 100000;
            cout << "Attempt #" << cnt << ". " << x << '\n';

        } while (x != number);
        if (x == number) {
            cout << "Wow! The computer found your number in " << cnt << " tries!\n";
        }
    }
    else if (pick < 2) {
        cout << "\nEnter in a number from 1 to 2. \n\n";
        goto back;
    }
    else if (pick > 1) {
        cout << "\nEnter in a number from 1 to 2. \n\n";
        goto back;
    }
    else {
        goto back;
    }
    system("PAUSE");
}