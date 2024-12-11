#include "Fraction.h"
#include <iostream>

using namespace std;

// -------- constructors -------
// standart
Fraction::Fraction(int numerator, int denominator): numerator(numerator), denominator(denominator) {
    cout << "Kontruktor aufgerufen" << endl;
}

// copy
Fraction::Fraction(const Fraction &f): numerator(f.numerator), denominator(f.denominator) {
    cout << "Kopierkonstruktor aufgerufen" << endl;
}

// asign
Fraction &Fraction::operator=(const Fraction &f) {
    cout << "Zuweisungsoperator aufgerufen" << endl;
    return *f;
}

// destructor
Fraction::~Fraction() {
    cout << "Destruktor aufgerufen" << endl;
}


// ------- private fields --------
// greadest common divider
int Fraction::gcd(int a, int b)
{

}

void Fraction::cancel()
{

}

void Fraction::format()
{

}


// -------- public fields --------
Fraction Fraction::add(const Fraction &f)
{

}

Fraction Fraction::subtract(const Fraction &f)
{

}

Fraction Fraction::multiply(const Fraction &f)
{

}

Fraction Fraction::divide(const Fraction &f)
{

}

void Fraction::read()
{

}

void Fraction::print()
{

}
