#include "fraction.h"

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

int Fraction::calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Fraction::inputFraction() {
    cout << "Enter the numerator: ";
    cin >> numerator;

    cout << "Enter the denominator: ";
    cin >> denominator;
}

void Fraction::displayFraction() const {
    cout << numerator << "/" << denominator;
}

void Fraction::simplify() {
    int gcd = calculateGCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}

Fraction Fraction::add(const Fraction& other) const {
    Fraction result;
    result.numerator = (numerator * other.denominator) + (other.numerator * denominator);
    result.denominator = denominator * other.denominator;
    result.simplify();
    return result;
}

Fraction Fraction::subtract(const Fraction& other) const {
    Fraction result;
    result.numerator = (numerator * other.denominator) - (other.numerator * denominator);
    result.denominator = denominator * other.denominator;
    result.simplify();
    return result;
}

Fraction Fraction::multiply(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.numerator;
    result.denominator = denominator * other.denominator;
    result.simplify();
    return result;
}

Fraction Fraction::divide(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator;
    result.denominator = denominator * other.numerator;
    result.simplify();
    return result;
}
