#include <iostream>
#include "Herzschrittmacher.h"
#include "SmartWatch.h"
#include "Mensch.h"

using namespace std;

/*
 * Mensch / Herzschrittmacher - Aggregation
 * Mensch / Herz - Komposition
 * Mensch / SmartWatch - Assoziation
 */

int main() {
    // Herzschrittmacher - Aggregation
    Herzschrittmacher herzschrittmacher;

    // SmartWatch - Assoziation
    SmartWatch smartWatch;

    // Mensch
    Mensch superman(herzschrittmacher);
    superman.setObject(&smartWatch);

    superman.gibLaut();

    return 0;
}
