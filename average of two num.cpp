#include <iostream>
using namespace std;
int main()
{
    float number1, number2,
    sum, average;

    cout << "Enter two numbers: "; // prompt
    cin >> number1;     // Reads numbers
    cin >> number2;     // from keywords

    sum = number1 + number2;
    average = sum/2;

    cout << "sum = " << sum << "\n";
    cout << "Average = " << average << "\n";

    return 0;
}