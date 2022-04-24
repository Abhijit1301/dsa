#include <iostream>

long long getFibonacci(int n, long long* memo) {
    if (0 == n) {
        return 1;
    }
    if (1 == n) {
        return 1;
    }
    if (n < 50) {
        if (memo[n] != -1) {
            return memo[n];
        }
        memo[n] = getFibonacci(n - 1, memo) + getFibonacci(n - 2, memo);
        return memo[n];
    }
    // memorizing for faster calculation.
    // will easily work till 85.

    return getFibonacci(n - 1, memo) + getFibonacci(n - 2, memo);
}

int main(int argc, char** argv) {
    long long memo[50];
    for (int i = 0; i < 50; i++) {
        memo[i] = -1;
    }
    int input;
    std::cout << "Enter the number to get its fibonacci value: ";
    std::cin >> input;
    std::cout << std::endl;
    std::cout << "Fibonacci of " << input << " is: " << getFibonacci(input, memo) << std::endl;
}
