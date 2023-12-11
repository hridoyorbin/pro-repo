#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // If n is divisible by any number between 2 and sqrt(n), it's not prime
        }
    }

    return 1; // If no divisors found, it's a prime number
}

int main() {
    int T, N;

    // Input the number of test cases
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        // Input the number for each test case
        scanf("%d", &N);

        // Check if the number is prime and print the result
        if (isPrime(N)) {
            printf("Prime number\n");
        } else {
            printf("Not a prime number\n");
        }
    }

    return 0;
}