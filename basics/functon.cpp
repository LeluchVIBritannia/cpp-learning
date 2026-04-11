#include<iostream>

using std::cout;
using std::cin;

void Sum(float first , float second);
float  Area(float length , float breadth);

int main(){

    float first = 0.0;
    float second = 0.0;
    float length = 0.0;
    float breadth = 0.0;

    cout << "\nEnter two numbers ";
    cin  >> first;
    cin  >> second;
    Sum(first , second);

    cout << "\nEnter Lenght and breadth of rectangle ";
    cin  >> length;
    cin  >> breadth;
    cout << "The area of the rectangle is " << Area(length, breadth) <<'\n';

    return 0;
}

void Sum(float first , float second){
    float Sum = first + second;
    cout <<"\nThe sum of " << first <<" and " << second <<" is "<<Sum <<'\n';
}

float Area(float length , float breadth){
    return  length * breadth;
}

/*
   We can have a funtion with same name nt dffrent parameter eg
   pizza(); and pizza(int price); both can exist 
*/