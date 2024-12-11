#ifndef OBST_H
#define OBST_H

#include "Lebensmittel.h"

class Obst: public Lebensmittel
{
public:
    Obst(string name);
    ~Obst();

    void zubereiten();
};

#endif // OBST_H
