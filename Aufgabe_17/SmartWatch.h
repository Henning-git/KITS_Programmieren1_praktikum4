#ifndef SMARTWATCH_H
#define SMARTWATCH_H

#include <string>

using namespace std;

class SmartWatch
{
private:
    string name = "TickTick";

public:
    SmartWatch();
    string gibLaut();
};

#endif // SMARTWATCH_H
