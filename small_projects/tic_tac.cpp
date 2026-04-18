#include <iostream>
#include <ctime>

using std::cin;
using std::cout;

void drawBoard(char *spaces);
void playerMove(char *spaces , char player);
void computerMove(char *spaces , char computer);
bool checkWinnner(char *spaces , char player , char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' '};
    char player = 'x';
    char computer = 'o';
    bool running = true;
    int  choise;

    do{
        
        drawBoard(spaces);
        while(running)
        {
            playerMove(spaces , player);
            drawBoard(spaces);
            if(checkWinnner(spaces, player, computer))
            {
                running = false;
                break;
            }
            else if(checkTie(spaces))
            {
                running = false;
                break;
            }

            computerMove(spaces , computer);
            drawBoard(spaces);

            if(checkWinnner(spaces, player, computer))
            {
                running = false;
                break;
            }
            else if(checkTie(spaces))
            {
                running = false;
                break;
            }
        }

        cout << "\npress 1 to play again ";
        cin  >> choise;
        if(choise == 1)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                spaces[j] = ' ';
                running = true;
            }
        }

    }while(choise == 1);

    cout << "\nThanks for playing.\n";

    return 0;
}

void drawBoard(char *spaces)
{
    cout << "\n\n";
    cout << "     |     |     \n";
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "   \n"; 
    cout << "_____|_____|_____\n"; 
    cout << "     |     |     \n";
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "   \n"; 
    cout << "_____|_____|_____\n"; 
    cout << "     |     |     \n";
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "   \n";    
    cout << "     |     |     \n"; 
    cout << "\n";
}
void playerMove(char *spaces , char player)
{
    int number;
    do
    {
        cout << "Enter a spot to place X(1-9) ";
        cin  >> number;
        number--;
        if(spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
    }while(!number > 0 || !number < 8);
}

void computerMove(char *spaces , char computer)
{
    int number;

    srand(time(0));
    while(true)
    {
        number = rand() % 9;
        if(spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinnner(char *spaces , char player , char computer)
{
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])    //rows check
    {
        spaces[0] == player ? cout << "\nYou win!\n" : cout << "\nYou lose!\n";
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        spaces[3] == player ? cout << "\nYou win!\n" : cout << "\nYou lose!\n";
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    { 
        spaces[6] == player ? cout << "\nYou win!\n" : cout << "\nYou lose!\n";
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]) //comlns check
    { 
        spaces[0] == player ? cout << "\nYou win!\n" : cout << "\nYou lose!\n";
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]) 
    { 
        spaces[1] == player ? cout << "\nYou win!\n" : cout << "\nYou lose!\n";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]) 
    { 
        spaces[2] == player ? cout << "\nYou win!\n" : cout << "\nYou lose!\n";
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]) //Diognal check
    { 
        spaces[0] == player ? cout << "\nYou win!\n" : cout << "\nYou lose!\n";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    { 
        spaces[2] == player ? cout << "\nYou win!\n" : cout << "\nYou lose!\n";
    }
    else 
    {
        return false;
    }

    return true;
}

bool checkTie(char *spaces)
{
    int notEmpty = 0;
    for(int i = 0 ; i < 9 ; i ++)
    {
        if(spaces[i] != ' ')
        {
            notEmpty +=1;
        }
    }
    if(notEmpty == 9)
    {
        cout << "Its a tie";
        return true;
    }
    return false;
}
