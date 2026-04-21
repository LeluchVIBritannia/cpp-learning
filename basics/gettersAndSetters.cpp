//Avstraction hiding data from outside a class
//getters makes private attrubue readable
//setters makes private attribute writeable

#include <iostream>

using std::cin;
using std::cout;

class Stove
{
    private: // Other cant change it 
        double temperature = 0.0;
    
    public:
        int getTemperature()
        {
            return temperature;
        }

        void setTemperature(double temperature)
        {
            this -> temperature = temperature;
        }
};

int main()
{   
    Stove stove;
    //stove.temperature = 1000000000; 
    // the data can be changed which we dont want so we sent it private to access it we use getter and setter

    cout << stove.getTemperature() << "C.\n";
    stove.setTemperature(100.908);
    cout << stove.getTemperature() << "C.\n";
    
    return 0;
}