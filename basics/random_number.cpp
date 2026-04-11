#include<iostream>
#include<ctime>

int main(){

    srand(time(NULL));
    for(int i =  0 ; i < 10 ; i++){
        int num = (rand() % 6) + 5; //  % 6 will set range 1-5 to get more we can use + diffrence
        std::cout <<num <<'\n';
    }
    return 0; 
}