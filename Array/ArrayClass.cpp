#include <iostream>
using namespace std;

class ArrayOperations {
private:
    int arr[100];
    int size;

public:
    void input();
    void oddIndexedElements();
    void sumOfElements();
    void averageOfElements();
    void insertElementAtIndex(int index, int element);
    void deleteElementAtIndex(int index);
    void display();
    int menu();
    void performOperations();
};

void ArrayOperations::input() {
    cout << "Enter the size of the array: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
    }
}

int ArrayOperations::menu() {
    cout << "\nMenu:" << endl;
    cout << "1. Print Odd Indexed Elements" << endl;
    cout << "2. Sum of all elements" << endl;
    cout << "3. Average of all elements" << endl;
    cout << "4. Insert element at specific index" << endl;
    cout << "5. Delete element at specific index" << endl;
    cout << "6. Display array elements" << endl;
    cout << "7. Exit" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    return choice;
}

void ArrayOperations::oddIndexedElements() {
    cout << "Odd indexed elements are: [ ";
    for (int i = 1; i < size; i += 2) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

void ArrayOperations::sumOfElements() {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "Sum of all elements is: " << sum << endl;
}

void ArrayOperations::averageOfElements() {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "Average of all elements is: " << (float)sum / size << endl;
}

void ArrayOperations::insertElementAtIndex(int index, int element) {
    if (index < 0 || index > size) {
        cout << "Invalid index. Insertion failed." << endl;
        return;
    }

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;
    size++;

    cout << "Element inserted successfully." << endl;
    display();
}

void ArrayOperations::deleteElementAtIndex(int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid index. Deletion failed." << endl;
        return;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    cout << "Element deleted successfully." << endl;
    display();
}

void ArrayOperations::display() {
    cout << "Array elements are: [ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

void ArrayOperations::performOperations() {
    while (true) {
        int choice = menu();

        switch (choice) {
        case 1:
            oddIndexedElements();
            break;

        case 2:
            sumOfElements();
            break;

        case 3:
            averageOfElements();
            break;

        case 4: {
            int index, element;
            cout << "Enter the index: ";
            cin >> index;
            cout << "Enter element to insert: ";
            cin >> element;
            insertElementAtIndex(index, element);
            break;
        }

        case 5: {
            int index;
            cout << "Enter the index of element to delete: ";
            cin >> index;
            deleteElementAtIndex(index);
            break;
        }

        case 6:
            display();
            break;

        case 7:
            cout << "Exiting..." << endl;
            return;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}

int main() {
    ArrayOperations obj;

    // obj.input();
    obj.performOperations();

    return 0;
}