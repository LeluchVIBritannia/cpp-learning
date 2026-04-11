#include <iostream>
#include <cmath> // cool maths functions 


int main()
{
    using std::cout;
    using std::cin;

    double H;
    double P;
    double B;
     
    cout <<"\n\nInput perpendicual  and base or triangle ";
    cin >>P; 
    cin >>B;
    
    H = sqrt( pow(P,2) + pow(B,2) );
    cout <<"The hypotenous is " <<H <<'\n';

    return 0;
}