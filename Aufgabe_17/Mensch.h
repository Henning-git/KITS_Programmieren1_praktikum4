#ifndef MENSCH_H
#define MENSCH_H

#include <iostream>
#include "Herzschrittmacher.h"
#include "SmartWatch.h"
#include "Herz.h"

class Mensch
{
private:
    Herzschrittmacher herzschrittmacher; // Aggregation
    SmartWatch *smartWatch; // Assoziation
    Herz herz; // Komposition

public:
    Mensch(Herzschrittmacher herzschrittmacher);
    void setObject(SmartWatch *smartWatch);
    void gibLaut();
};

#endif // MENSCH_H
