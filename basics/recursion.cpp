#include <fstream>
#include <iostream>

using std::cin;
using std::cout;

int fact(int num);

int main()
{

    cout << fact(10);
    return 0;
}

int fact(int num)
{
    if (num > 1)
    {
        return num * fact(num -1);
    }
    else
    {
         return 1;
    }
}