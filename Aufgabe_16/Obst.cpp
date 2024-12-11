#include "Obst.h"

Obst::Obst(string name): Lebensmittel(name) {
    cout << "Obst Konstruktor" << endl;
}

Obst::~Obst() {
    cout << "Obst Destruktor" << endl;
}

void Obst::zubereiten() {
    cout << "Obst schaelen" << endl;
}
