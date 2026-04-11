#include <iostream>

namespace first{ //With name sapace we can use same variable a lot
    int x = 1;   // var x exist at line 27. But can use x with name space.
}

int main(){ 
    // to print we use std = standart :: is to look at funcion and cout = character out. 
    std::cout <<"Hello World" << '\n';   // to add new line do eigther '\n' or <<std::endl;   endl; removes new line buffe 
    std::cout <<"Zero" <<std::endl <<'\n';

    //variables 
    int xx = 5;     // int = integer
    double y = 6.9; //Decimal value 
    char hi = 'A';  // stores single character
    bool isStudent = true; //Boolean true or false 
    std::string name = "Alvin"; // for sting we use std::string 

    std::cout <<"this is a boolean: " << isStudent <<". This is string: " <<name <<". This is a single character:" <<hi <<'\n';
    std::cout <<"this is a double: " <<y <<". This is a integer: " <<xx <<'\n'; // printing stuff

    //Const keyword tells c++ thar this is a constatnt nd dont change it 
    const double pie = 3.14;
    std::cout <<"Before pie x 2 "<<pie <<'\n';
    //pie = 2; // gives error
    std::cout <<"After  pie x 2 "<<pie <<'\n';

    // name spaces  we can name entity identicall if the namespace is unique
    int x = 0;   //name space is declaredd oiut of function
    std::cout <<"First x var " << x <<". Name space x var "<< first::x <<'\n';

    
    return 0;
}   