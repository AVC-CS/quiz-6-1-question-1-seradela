#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
using namespace std;

// Get two integer values from the user such that begin < end
void getTwoValues(int &begin, int &end) {
    do {
        cout << "Enter two integers (begin < end): ";
        cin >> begin >> end;
        if (begin >= end) {
            cout << "Invalid input. 'begin' must be less than 'end'. Try again.\n";
        }
    } while (begin >= end);
}

// Helper function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Return the next prime number after the given "begin"
int getNextPrime(int begin) {
    int next = begin + 1;
    while (!isPrime(next)) {
        ++next;
    }
    return next;
}

// Return the previous prime number before the given "end"
int getPrevPrime(int end) {
    int prev = end - 1;
    while (prev > 1 && !isPrime(prev)) {
        --prev;
    }
    return prev;
}

#endif