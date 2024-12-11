#ifndef GEMUESE_H
#define GEMUESE_H

#include "Lebensmittel.h"

class Gemuese: public Lebensmittel
{
public:
    Gemuese(string name);
    ~Gemuese();

    void zubereiten();
};

#endif // GEMUESE_H
