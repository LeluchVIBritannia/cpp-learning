#include <iostream>
#include <algorithm>

int main()
{
    //If we want to fill our array with a value. We can use fill function
    //Syntax : fill(begin, end, value);
    
    const int size = 100;
    int numbers[size];
    std::fill(numbers , numbers + size , 1); //The array numbers all 100 elements are 1 now
    
    for(int i = 0 ; i < (size / 2) ; i++)
    {
        std::cout << numbers[i] <<'\n';
    }

    return 0;
}
