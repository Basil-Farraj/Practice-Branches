#include <iostream>
using namespace std;

int Add(int number1, int number2)
{
    return number1 + number2;
}

int Subtract(int firstNumber, int secondNumber)
{
    return firstNumber - secondNumber;
}

int main()
{
    cout << Add(10, 5) << endl;

    cout << "10 - 4 = " << Subtract(10, 4) << '\n';

    cout << "NEW MESSAGE HERE";
    return 0;
}