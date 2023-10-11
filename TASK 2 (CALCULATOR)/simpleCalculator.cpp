#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int divide(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    if (a < b)
    {
        return 0;
    }

    return sub(a, divide(a + 1, b));
}
int mul(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }

    return add(a, mul(a, b - 1));
}

int main()
{
    int num1, num2;
    int op;
    cout << "====================================\n";
    cout << "            Calculator\n";
    cout << "====================================\n";

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Choose an operation: \n1. Add\n2. Substraction\n3. Multiplication\n 4. Divide\n";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    double result;

    switch (op)
    {
    case 1:
        result = add(num1, num2);
        break;
    case 2:
        result = sub(num1, num2);
        break;
    case 3:
        result = mul(num1, num2);
        break;
    case 4:
        result = divide(num1, num2);
        break;
    default:
        cout << "Invalid operator\n";
        return 1;
    }

    // Clear input buffer
    cin.clear();

    cout << "====================================\n";
    cout << "Result: " << num1 << " " << op << " " << num2 << " = " << fixed << setprecision(2) << result << "\n";
    cout << "====================================\n";

    return 0;
}