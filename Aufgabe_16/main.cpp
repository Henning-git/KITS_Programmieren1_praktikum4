#include <iostream>

#include "Lebensmittel.h"
#include "Fleisch.h"
#include "Obst.h"
#include "Gemuese.h"

using namespace std;

int main() {
    Lebensmittel mittagessen("Mittagessen");
    Fleisch steak("Steak");
    Obst apfel("Apfel");
    Obst banane("Banane");
    Gemuese paprika("Paprika");

    mittagessen.zubereiten();
    steak.zubereiten();
    apfel.zubereiten();
    banane.zubereiten();
    paprika.zubereiten();

    steak.Lebensmittel::zubereiten();
    return 0;
}
