#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
private:
    int numerator;
    int denominator;

    int gcd(int a, int b); // greadest common divider
    void cancel();
    void format();

public:
    Fraction(int numerator = 0, int denominator = 1);
    Fraction(const Fraction &f); // kopierkonstruktor
    Fraction & operator=(const Fraction &f); // zuweisungsoperator
    ~Fraction();

    Fraction add(const Fraction &f);
    Fraction subtract(const Fraction &f);
    Fraction multiply(const Fraction &f);
    Fraction divide(const Fraction &f);

    void read();
    void print();
};

#endif // FRACTION_H
