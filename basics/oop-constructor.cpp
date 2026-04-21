#include <iostream>

using std::cin;
using std::cout;
using std::string;

class Student
{
    public:
        string name;
        bool isPresent;
        int rollnum;
        int grade;

    Student(string Name , bool present , int Rollnum , int Grade) //This is a constructior 
    {
        this -> name = Name;
        this -> isPresent = present;
        this -> rollnum = Rollnum;
        this -> grade = Grade;
    }
};

int main()
{
    Student s1("Yanz" , true , 64 , 10);
    Student s2("Alv"  , true , 65 , 10);

    cout << "Name is " << s1.name << " roll number " << s1.rollnum  << " of grade " << s1.grade << ".\n";
    cout << "Name is " << s2.name << " roll number " << s2.rollnum  << " of grade " << s2.grade << ".\n";

    return 0;
}
