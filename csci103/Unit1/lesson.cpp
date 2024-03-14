#include <iostream>
#include <cmath> // For math functions

using namespace std;

// Function prototype
double computeAverage(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    // Expressions and Arithmetic Operations
    int a = 5;
    int b = 2;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b (integer division) = " << a / b << endl;
    cout << "a / b (floating point) = " << static_cast<double>(a) / b << endl;

    // Control Flow: If-Else
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "a is not greater than b" << endl;
    }

    // Control Flow: For Loop
    for (int i = 0; i < 5; i++) {
        cout << "Loop iteration: " << i << endl;
    }

    // Arrays
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Functions and Array Arguments
    printArray(numbers, size);
    cout << "Average of numbers: " << computeAverage(numbers, size) << endl;

    return 0;
}

// Function to compute average of array elements
double computeAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

// Function to print array elements
void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
