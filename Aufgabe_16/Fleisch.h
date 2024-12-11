#ifndef FLEISCH_H
#define FLEISCH_H

#include "Lebensmittel.h"

class Fleisch: public Lebensmittel
{
public:
    Fleisch(string name);
    ~Fleisch();

    void zubereiten();
};

#endif // FLEISCH_H
