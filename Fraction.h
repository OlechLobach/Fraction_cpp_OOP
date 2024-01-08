#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;
class Fraction {
private:
    int numerator;
    int denominator;


    static int calculateGCD(int a, int b);

public:
    Fraction();
    Fraction(int num, int denom);

    void inputFraction();
    void displayFraction() const;
    void simplify();

    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;
};

#endif

