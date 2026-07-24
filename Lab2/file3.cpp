#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    int choice;
    char again;

    do
    {
        cout << "\n===== Calculator Menu =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        switch (choice)
        {
            case 1:
                cout << "Addition = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Subtraction = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Multiplication = " << num1 * num2 << endl;
                break;

            case 4:
                if (num2 != 0)
                    cout << "Division = " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero is not allowed." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "\nDo you want to perform another operation? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "\nThank you for using the calculator!" << endl;

    return 0;
}