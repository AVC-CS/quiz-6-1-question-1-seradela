#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
using namespace std;

void getTwoValues(int &begin, int &end) {
    do {
        cout << "Enter two integers (begin < end): ";
        cin >> begin >> end;
        if (begin >= end) {
            cout << "Invalid input. 'begin' must be less than 'end'. Try again.\n";
        }
    } while (begin >= end);
}

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int getNextPrime(int begin) {
    int next = begin + 1;
    while (!isPrime(next)) {
        ++next;
    }
    return next;
}

int getPrevPrime(int end) {
    int prev = end - 1;
    while (prev > 1 && !isPrime(prev)) {
        --prev;
    }
    return prev;
}

#endif