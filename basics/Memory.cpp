#include <iostream>

using std::cout;
using std::cin;
using std::string;

void swap(string &s1, string &s2);

int main()
{
    // Memory: addresses
    string name = "Zero";
    int age = 18;
    bool student = true;

    cout << "The address of name is " << &name << '\n';
    cout << "The address of age is "  << &age  << '\n';
    cout << "The address of student is " << &student << '\n';

    // Pass by reference (swap originals)
    string x = "AlnS";
    string y = "YanzT";

    swap(x, y);

    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';

    // Pointer: a variable that stores the address of another variable
    string Name = "yant";        // separate variable
    string *pName = &Name;       // pName points to Name

    cout << "Address stored in pName: " << pName << '\n';
    cout << "Value pointed to by pName: " << *pName << '\n';

    // Null pointer example
    int *pointer = nullptr;      // pointer starts as null
    int num = 123;

    pointer = &num;              // now it points to num

    if (pointer == nullptr)
    {
        cout << "Address was not assigned\n";
    }
    else
    {
        cout << "Address was assigned: " << pointer << '\n';
    }

    return 0;
}

void swap(string &s1, string &s2)
{
    string temp = s1;
    s1 = s2;
    s2 = temp;
}