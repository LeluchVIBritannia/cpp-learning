#include <iostream>

using std::cout;
using std::cin;

void bubbleSort(int numbers[] , int size);

int main() {
    int numbers[] = {100, 2, -89, 98, 50, 8, 67, 64, 89, 0};
    int size = sizeof(numbers) / sizeof(int);

    cout << "Before sort: \n";
    for(int num : numbers)
    {
        cout << num << '\n';
    }

    bubbleSort(numbers, size);

    cout << "After sort: \n";
    for(int num : numbers) 
    {
        cout << num << '\n';
    }
    return 0;
}

void bubbleSort(int numbers[], int size) 
{
    int temp = 0;
    
    for(int i = 0; i < size - 1; i++) 
    {
        for(int j = 0; j < size - i - 1; j++) 
        {
            if(numbers[j] > numbers[j + 1]) 
            { 
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}