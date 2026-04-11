#include <iostream>

int main(){
    using std::cin;
    using std::cout;

    for(int j = 1 ; j <= 3 ; j++){
        for(int i = 1 ; i <= 10 ; i++)
        {   
            cout <<i <<" ";
        }
        cout <<'\n';
    }

    int rows;
    int colm;
    char sym;

    cout <<"\nWhat is the length? ";
    cin  >>rows;
    cout <<"\nwhat is the bredth? ";
    cin  >>colm;
    cout <<"\nWhat symbole to use? ";
    cin  >>sym;

    for(int a = 0 ; a <= rows ; a++){
        for(int b = 0 ; b <= colm ; b++){
            cout <<sym;
        }
        cout <<'\n';
    }
    return 0;
}