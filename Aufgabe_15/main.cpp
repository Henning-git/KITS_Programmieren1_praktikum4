#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {
    // local variables!
    Fraction f1; // Standardkonstruktor mir vorbelegten Werten
    Fraction f2; // siehe oben
    Fraction result;

    f1.read();
    f2.read();
    cout << endl << "Erster Bruch: ";
    f1.print();
    cout << "Zweiter Bruch: ";
    f2.print();

    cout << endl << "Addition:" << endl; // Addition
    result = f1.add(f2);
    result.print();

    cout << endl << "Subtraktion:" << endl; // Substraktion
    result = f1.subtract(f2);
    result.print();

    cout << endl << "Multiplikation:" << endl; // Multiplikation
    result = f1.multiply(f2);
    result.print();

    cout << endl << "Division: " << endl; // Division
    result = f1.divide(f2);
    result.print();

    Fraction f3 = result; // Kopierkonstruktor
    f3.print();

    f3 = f1; // Zuweisungsoperator
    f3.print();
}
