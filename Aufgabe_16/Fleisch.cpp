#include "Fleisch.h"

Fleisch::Fleisch(string name): Lebensmittel(name) {
    cout << "Fleisch Konstruktor" << endl;
}

Fleisch::~Fleisch() {
    cout << "Fleisch Destruktor" << endl;
}

void Fleisch::zubereiten() {
    cout << "Fleisch anbraten" << endl;
}
