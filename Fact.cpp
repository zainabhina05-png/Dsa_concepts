#include <iostream>
using namespace std;
int findFactorial(int num) {
    if (num < 0) return -1; // Factorial not defined for negative numbers
    if (num == 0 || num == 1) return 1;
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int arr[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Factorials of the entered integers:\n";
    for (int i = 0; i < 5; i++) {
        int result = findFactorial(arr[i]);
        if (result != -1) {
            cout << "Factorial of " << arr[i] << " is " << result << endl;
        } else {
            cout << "Factorial not defined for negative number: " << arr[i] << endl;
        }
    }
    return 0;
}