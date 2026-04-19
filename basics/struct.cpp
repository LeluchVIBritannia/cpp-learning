#include <iostream>
#include <random>

using std::cin;
using std::cout;

struct student
{
    std::string name;
    int rollnumber;
    bool isPresent;
};

int main()
{
    student student1;
    student1.name = "YanzT";
    student1.rollnumber = 64;
    student1.isPresent = true;

    cout << student1.name << '\n' << student1.rollnumber << '\n' << student1.isPresent << '\n';

    return 0;
}

