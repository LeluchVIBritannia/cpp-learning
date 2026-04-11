#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    std::string name;
    int number;

    while(name.empty()){ // doesnt exit until the conditon is true
        
        cout <<"\nEnter your name ";
        std::getline(cin , name);
    }

    cout <<"\nWelcome to the system " <<name;

    //Do while loop

    do{

        cout <<"\n\nEnter a positive number ";
        cin  >>number;

    }while(number < 0);

    //for loop
    for (int i = 0 ; i < 3; i++){

        cout <<"Hello " << number <<" " <<name <<'\n';
    }
    
    //Break continue break ends the loop continue skip current loop
    for(int j = 0; j < 10 ; j ++){
        if(j == 5){
            continue;
            cout <<"HI\n" <<j;
        }

    }
    //Break isone in switch

    return 0;
}