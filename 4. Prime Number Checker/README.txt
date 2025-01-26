Prime Number Checker - Project Explanation

Overview:

This program is a simple command-line application that checks whether a given number is a prime number. The user can continuously enter numbers, and the program will determine if each number is prime or not. The program will exit when the user enters 0.

Features:

Accepts user input continuously.

Checks if a number is prime using an optimized method.

Uses efficient mathematical checks to improve performance.

Exits gracefully when 0 is entered.

How the Prime Check Works:

If n < 2, the number is not prime.

If n == 2, the number is prime.

If n is even (excluding 2), it is not prime.

The function checks divisibility starting from 3 up to sqrt(n), incrementing by 2 (only odd numbers).

If any divisor is found, the number is not prime; otherwise, it is prime.

Code Breakdown:

isPrime(int n) Function:

Efficiently determines if a number is prime using mathematical optimizations.

Reduces unnecessary iterations by checking divisibility only up to sqrt(n).

main() Function:

Runs an infinite loop, taking user input.

Calls isPrime(n) to check primality and displays the result.

Terminates when the user enters 0.

Example Runs:

Enter a number (press '0' to exit): 7
The number 7 is prime.

Enter a number (press '0' to exit): 10
The number 10 is not prime.

Enter a number (press '0' to exit): 0
Program successfully closed...

Improvements:

Using sqrt(n) for optimization.

Skipping even numbers to reduce iterations.

Using concise and clear console messages.

This project is a simple yet effective demonstration of loops, conditionals, and mathematical efficiency in C++.

