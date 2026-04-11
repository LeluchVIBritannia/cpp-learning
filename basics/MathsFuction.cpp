#include <iostream>
#include <cmath>

namespace first
{
    double z;
}

int main()
{
    using std::cout;
    using std::cin;

    double x = 3;
    double y = 4;
    double z;

    z = std::max(x , y); //gives max in 2 function 
    first::z = std::min(x , y); //gives min in 2 function
    
    cout <<"The max is " << z <<". The min is " <<first::z <<'\n';

    //the function are part of <cmath>
    cout <<"The power of 2 to power 4 is " <<pow(2 , 4) <<'\n';
    cout <<"The squareroot of 100 is " <<sqrt(100) <<'\n';
    cout <<"The absolute value of -100 is " <<abs(-100) <<'\n';
    cout <<"3.1415 rounded gives " <<round(3.1415) <<'\n';   //ceil()   rounds up   floor()  rounds down 

    return 0;
}
