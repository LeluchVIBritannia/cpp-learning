#include <iostream>

using std::cout;
using std::cin;

void swap(std::string &s1 , std::string &s2);

int main()
{
    //Memory
    std::string name = "alvin";
    int age = 18;
    bool student = true;

    cout << "The address of name is " << &name << '\n';
    cout << "The address of age is " << &age << '\n';
    cout << "The address of student is " << &student << '\n';

    //pass my value and pass by reference 
    //pass by value = copy pass by reference = orignal 
    std::string x = "AlnS";
    std::string y = "YanzT";

    swap(x , y);

    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';
    

    return 0;
}

void swap(std::string &s1 , std::string &s2)
{
    std::string temp;

    temp = s1;
    s1 = s2;
    s2 = temp;
}
