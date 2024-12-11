#ifndef LEBENSMITTEL_H
#define LEBENSMITTEL_H

#include <iostream>
#include <string>

using namespace std;

class Lebensmittel
{
public:
    Lebensmittel(string name);
    ~Lebensmittel();

    void zubereiten();
};

#endif // LEBENSMITTEL_H
