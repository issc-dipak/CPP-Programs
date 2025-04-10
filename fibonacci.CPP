#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;  // Base case
    if (n == 1) return 1;  // Base case
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int num;
    cout << "Enter the position in Fibonacci series: ";
    cin >> num;
    cout << "Fibonacci number at position " << num << " is " << fibonacci(num) << endl;
    return 0;
}
