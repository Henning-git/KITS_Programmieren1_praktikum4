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
    // copy atribut values
    this->numerator = f.numerator;
    this->denominator = f.denominator;

    cout << "Zuweisungsoperator aufgerufen" << endl;

    // return own object
    return *this;
}

// destructor
Fraction::~Fraction() {
    cout << "Destruktor aufgerufen" << endl;
}


// ------- private fields --------
// greadest common divider
int Fraction::gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void Fraction::cancel() {
    int gcdNumDenom = gcd(this->numerator, this->denominator);
    this->numerator /= gcdNumDenom;
    this->denominator /= gcdNumDenom;
}

void Fraction::cancel(Fraction &f) {
    int gcdNumDenom = gcd(f.numerator, f.denominator);
    f.numerator /= gcdNumDenom;
    f.denominator /= gcdNumDenom;
}

void Fraction::format() {
    cancel();

    if (this->denominator < 0) {
        this->numerator = -this->numerator;
        this->denominator = -this->denominator;
    }
    else if (this->denominator == 0) {
        cout << "Nenner darf nicht Null sein!" << endl;
    }
}

void Fraction::format(Fraction &f) {
    cancel(f);

    if (f.denominator < 0) {
        f.numerator = -f.numerator;
        f.denominator = -f.denominator;
    }
    else if (f.denominator == 0) {
        cout << "Nenner darf nicht Null sein!" << endl;
    }
}


// -------- public fields --------
Fraction Fraction::add(const Fraction &f) {
    Fraction erg;
    erg.numerator = this->numerator * f.denominator + f.numerator * this->denominator;
    erg.denominator = this->denominator * f.denominator;

    format(erg);
    return erg;
}

Fraction Fraction::subtract(const Fraction &f) {
    Fraction erg;
    erg.numerator = this->numerator * f.denominator - f.numerator * this->denominator;
    erg.denominator = this->denominator * f.denominator;

    format(erg);
    return erg;
}

Fraction Fraction::multiply(const Fraction &f) {
    Fraction erg;
    erg.numerator = this->numerator * f.numerator;
    erg.denominator = this->denominator * f.denominator;

    format(erg);
    return erg;
}

Fraction Fraction::divide(const Fraction &f) {
    Fraction erg;
    erg.numerator = this->numerator * f.denominator;
    erg.denominator = this->denominator * f.numerator;

    format(erg);
    return erg;
}

void Fraction::read() {
    cout << "Zaehler: ";
    cin >> this->numerator;

    int denominator = 0;
    do {
        cout << "Nenner: ";
        cin >> denominator;
    } while(denominator == 0);

    this->denominator = denominator;

    format();
}

void Fraction::print() {
    cout << this->numerator << "/" << this->denominator << endl;
}
