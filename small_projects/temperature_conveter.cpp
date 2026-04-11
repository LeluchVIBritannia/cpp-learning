#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    double temperature_C;
    double temperature_F;
    char Option;
    cout <<"Temperature conveter program\n\n\n" <<"F = Fahrenheit\nC = Celcius\n" <<"Enter your choice. ";
    cin >>Option;

    if(Option == 'F' || Option == 'f')
    {
        cout <<"Enter temperature in Fahrenheit ";
        cin >>temperature_F;
        temperature_C = (1.8 *temperature_F) + 32;
        cout <<'\n' <<temperature_C;

    }
    else if(Option == 'C' || Option == 'c')
    {
        cout <<"Enter temperature in Celcius ";
        cin >>temperature_C;
        temperature_F = ( temperature_C - 32) / 1.8;
        cout <<'\n' <<temperature_F;

    }
    else
    {
        cout <<"\nEnter only in F or C\n";
        return 1;
    }

    cout <<"\nBYE BYYE!\n";

    return 0;
}