#include <iostream>
#include <string>

using std::cin;
using std::cout;

class Animal
{
    public:
        bool isAlive = true;
        std::string name;
        int age;


        void eat()
        {
            cout << "This animal is eating.\n";
        }
};

class Dog : public Animal // the attribute of Animal will be fr dog also 
{
    public:
        std::string bread;

        void bark()
        {
            cout << "Dog is barking.\n";
        }
};

int main()
{   
    Dog dog;
    dog.eat(); //Even though class dog doent have eat directly we cna use it because it inherited from animal
    dog.age = 1; 
    dog.bark();

    Animal a1;
    a1.eat();
    a1.name = "Elephant";
    cout << "The animal is " << a1.name << ".\n";

    return 0;
}