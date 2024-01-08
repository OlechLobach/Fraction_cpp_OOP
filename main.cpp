#include "fraction.h"

int main() {
    Fraction fraction1(3, 4);
    Fraction fraction2(2, 5);

    cout << "Fraction 1: ";
    fraction1.displayFraction();
    cout << endl;

    cout << "Fraction 2: ";
    fraction2.displayFraction();
    cout << endl;

    Fraction sum = fraction1.add(fraction2);
    cout << "Sum: ";
    sum.displayFraction();
    cout << endl;

    Fraction difference = fraction1.subtract(fraction2);
    cout << "Difference: ";
    difference.displayFraction();
    cout << endl;

    Fraction product = fraction1.multiply(fraction2);
    cout << "Product: ";
    product.displayFraction();
    cout << endl;

    Fraction quotient = fraction1.divide(fraction2);
    cout << "Quotient: ";
    quotient.displayFraction();
    cout << endl;

    return 0;
}
