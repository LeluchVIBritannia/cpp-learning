s);
void playerMove(char *spaces , char player);
void computerMove(char *spaces , char computer);
bool checkWinnner(char *spaces , char player , char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' '};
    char player = 'X';
    char computer = 'o';
    bool running = true;

    drawBoard(spaces);
    while(running)