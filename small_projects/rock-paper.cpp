#include <iostream>
#include  <ctime>

using std::cin;
using std::cout;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player , char computer); 

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    cout << "\nYour choice: ";
    showChoice(player);
    
    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);
    
    chooseWinner(player , computer);

    return 0;
}

char getUserChoice()
{   
    char player;
    cout << "Rock-Paper-Sissors Game.";
    do {
         cout <<"\nWhat do you pick\nr -Rock\np -Paper\ns -Sissors\n";
        cin  >> player;
    }while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice()
{   
    char computer;
    
    srand(time(0));
    int num = rand() % 3 + 1;
    
    switch(num)
    {
        case 1:
            return 'r';
            break;
        case 2:
            return 'p';
            break;
        case 3:
            return 's';
            break;
    };
    return 0;
}

void showChoice(char choice)
{
    switch(choice)
    {
        case 'r': 
            cout << "Rock\n";
            break;
        case 'p':
            cout << "Paper\n";
            break;
        case 's':
            cout << "Sissor\n";
            break;
    } 
}

void chooseWinner(char player , char computer)
{
   switch(player)
   {
        case 'r':
            if(computer == 'r')
            {
                cout << "\nIts a draw\n";
            }
            else if (computer == 'p')
            {
                cout << "\nYou Lose.\n";   
            }
            else 
            {
                cout << "\nYou Win.\n";
            }
            break;

        case 'p':
            if(computer == 'r')
            {
                cout << "\nYou win.\n";
            }
            else if (computer == 'p')
            {
                cout << "\nIts a draw.\n";   
            }
            else 
            {
                cout << "\nYou lose.\n";
            }
            break;

        case 's':
            if(computer == 'r')
            {
                cout << "\nYou lose.\n";
            }
            else if (computer == 'p')
            {
                cout << "\nYou win.\n";   
            }
            else 
            {
                cout << "\nIts a draw.\n";
            }
            break;
   }   
}