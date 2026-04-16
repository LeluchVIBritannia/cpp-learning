//We use luhn algorithm to test cridit card

#include <iostream>

using std::cout;
using std::cin;

int getDigit(const int number);
int sumOdd(const std::string cardNumber);
int sumEven(const std::string cardNumber);

int main()
{
    std::string cardNumber;
    int result = 0;

    cout << "\nEnter your credit card number ";
    cin  >> cardNumber;

    result = sumEven(cardNumber) + sumOdd(cardNumber);

    if(result % 10 == 0)
    {
        cout << cardNumber << " is valid.\n";
    }
    else 
    {
        cout << cardNumber << " is not valid.\n";
    }

    return 0;
}


int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}

int sumOdd(const std::string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() - 1 ; i >= 0 ; i -= 2)
    {
        sum += (cardNumber[i] - '0');
    }
    return sum;
}

int sumEven(const std::string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() - 2 ; i >= 0 ; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}