#include <iostream>
#include <ctime>

int main() {
    using std::cin;
    using std::cout;

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = ((rand() % 6) + 95 );

    cout << "\n\nNUMBER GUESSING GAME\n\n";
    cout << "Guess a number from 0 - 100 ";
    cin >> guess;

    while (num != guess) {
        tries++;

        if (guess > num) {
            cout << "Too high!\n";
        } else {
            cout << "Too low!\n";
        }

        cout << "Wrong! Guess again ";
        cin >> guess;
    }

    tries++; 

    cout << "\nCorrect! You got it right. The number is " << num << '\n';
    cout << "It took you " << tries << " tries.\n";

    return 0;
}