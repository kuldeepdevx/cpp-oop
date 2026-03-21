#include <iostream>
using namespace std;

int menu();
void add(float a, float b);
void subtract(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);

int main() {
    float num1, num2;
    int choice;

    do {
        choice = menu();

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;
        }

        switch(choice) {
            case 1:
                add(num1, num2);
                break;

            case 2:
                subtract(num1, num2);
                break;

            case 3:
                multiply(num1, num2);
                break;

            case 4:
                divide(num1, num2);
                break;

            case 5:
                cout << "Exiting calculator..." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }

    } while(choice != 5);

    return 0;
}

int menu() {
    int choice;
    cout << "\nCalculator Menu\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    return choice;
}

void add(float a, float b) {
    cout << "Result: " << a + b << endl;
}

void subtract(float a, float b) {
    cout << "Result: " << a - b << endl;
}

void multiply(float a, float b) {
    cout << "Result: " << a * b << endl;
}

void divide(float a, float b) {
    if(b == 0) {
        cout << "Error: Division by zero not allowed." << endl;
    } else {
        cout << "Result: " << a / b << endl;
    }
}