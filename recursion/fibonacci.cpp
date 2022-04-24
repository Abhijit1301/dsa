#include <iostream>

long long getFibonacci(int n) {
    if (0 == n) {
        return 1;
    }
    if (1 == n) {
        return 1;
    }
    return getFibonacci(n - 1) + getFibonacci(n - 2);
}

int main(int argc, char** argv) {
    int input;
    std::cout << "Enter the number to get its fibonacci value: ";
    std::cin >> input;
    std::cout << std::endl;
    std::cout << "Fibonacci of " << input << " is: " << getFibonacci(input) << std::endl;
}
