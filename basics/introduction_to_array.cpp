#include <iostream>

using std::cout;
using std::cin;

void stringArray(std::string array[] , int size);
void intArray();
void foreachLoop();

int main()
{
    std::string car[4] = {"Gtr-r33" , "Mustang" , "S13"};
    stringArray(car , 3);
    intArray();
    foreachLoop();
   
    return 0;
}

void stringArray(std::string array[] , int size)
{
   
    cout << array[2] << '\n';   
    cout << array[0] << '\n';  
      
}

void intArray() 
{
    int array[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter a number: ";
        cin >> array[i];
    }

    cout << "The array contains:\n";
    for (int j = 0; j < sizeof(array) / sizeof(int); j++) {
        cout << array[j] << ' ';
    }
    cout << '\n';
}

void foreachLoop()
{
    std::string name[] = {"name1" , "Name2" , "name3" , "Name4"};
    //Shoter version of for loop
    for(std::string name : name)
    {
        cout << name << '\n';
    }
}