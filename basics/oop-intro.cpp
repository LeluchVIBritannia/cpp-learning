#include <iostream>

using std::cin;
using std::cout;

class car
{
    public:
        std::string Name;
        std::string Brand;
        std::string colour;
        int hp;
        int topspeed;

        void setColour(const std::string &col)
        {
            colour = col;
        }

};

int main()
{
    car carA;
    carA.Name     = "F-40";
    carA.Brand    = "Ferrari";
    carA.hp       = 1000;
    carA.topspeed = 300; 
    carA.setColour("red");

    cout << "\nThe car is a " << carA.Brand << " " << carA.Name << " with " << carA.hp << ".\n";

    return 0;
}
