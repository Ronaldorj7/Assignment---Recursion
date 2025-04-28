#include <iostream>
using namespace std;
//1.
int sumN(int n) {
    if (n == 0) {
        return 0; 
    }
    return n + sumN(n - 1); //recursive part
}

//2. 
int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    }
    if (n == 1) {
        return 1; 
    }
    return fibonacci(n - 1) + fibonacci(n - 2); //recursive part
}

//3. 
void printBinaryNum(int n) {
    if (n == 0) {
        return; //nothing is been done
    }
    printBinaryNum(n / 2); 
    cout << (n % 2); //printed after recursive call
}

//4. 
int sumOfDigits(int n) {
    if (n == 0) {
        return 0; 
    }
    return (n % 10) + sumOfDigits(n / 10); //recursive part
}

//5.
void printArrReverse(int arr[], int size) {
    if (size == 0) {
        return; 
    }
    cout << arr[size - 1] << " "; //last part
    printArrReverse(arr, size - 1); //small array recursed
}

int main() {
    // Testing #1
    int n = 6;
    cout <<"The sum of first " << n << " natural numbers:" << sumN(n) << endl;

    // Testing #2
    n = 8;
    cout << "The fibonacci number at position " << n << ":" << fibonacci(n) << endl;

    // Testing #3
    n = 15;
    cout << "The binary representation of " << n << ": ";
    if (n == 0) {
        cout << 0;
    } else {
        printBinaryNum(n);
    }
    cout << endl;

    // Testing #4
    n = 5678;
    cout << "The sum of digits of " << n << ": " << sumOfDigits(n) << endl;

    // Testing #5
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The array elements in reverse: ";
    printArrReverse(arr, size);
    cout << endl;

    return 0;
}
