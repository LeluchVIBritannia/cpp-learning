#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int *pNum = NULL;
    pNum = new int;   //New is used to alocate memory in heap
    *pNum = 21;

    cout << "\nAddress " << pNum << " \n";
    cout << "\nValue " << *pNum << " \n";

    delete pNum;
    
    return 0;
}