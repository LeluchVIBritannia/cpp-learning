#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    
    int age;
    int month;

    cout <<"Age Checker\n\n";
    cout <<"What is you age? ";
    cin >>age;

    if (age >= 18)
    {
        cout <<"You are an adult\n";   
    }
    else if(age <=0)
    {
        cout <<"Please Enter a valid age\n";
    }
    else
    {
        cout <<"You are too young!!!\n";
    }

    cout <<"\n\nMONTH\n\n";

    cout <<"what number is month rn. ";
    cin  >>month;

    switch (month)
    {
    case 1:
        cout <<"Its Jan\n";
        break;

    case 2:
        cout <<"Its Feb\n";
        break;

    case 3:
        cout <<"Its March\n";
        break;
    
    case 4:
        cout <<"Its April\n";
        break;
    
    case 5:
        cout <<"Its May\n";
        break;
    
    case 6:
        cout <<"Its June\n";
        break;
    
    case 7:
        cout <<"Its July\n";
        break;
    
    case 8:
        cout <<"Its Agust\n";
        break;
    
    case 9:
        cout <<"Its Sep\n";
        break;
    
    case 10:
        cout <<"Its Oct\n";
        break;
    
    case 11:
        cout <<"Its Nov\n";
        break;
    
    case 12:
        cout <<"Its Dec\n";
        break;
    
    default:
        cout <<"You cant have more than 12 monts.\n"; 
        break;
    }


    //tenery operator 
    int grade;
    cout <<"\n\nEnter your grade ";
    cin  >>grade;

    grade >= 40 ? cout <<"You have Pass\n" : cout <<"You Failed\n";
    
    return 0;
}