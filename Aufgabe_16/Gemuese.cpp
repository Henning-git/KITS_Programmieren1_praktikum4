#include "Gemuese.h"

Gemuese::Gemuese(string name): Lebensmittel(name) {
    cout << "Gemuese Kontruktor" << endl;
}

Gemuese::~Gemuese() {
    cout << "Gemuese Destruktor" << endl;
}

void Gemuese::zubereiten() {
    cout << "Gemuese putzen" << endl;
}
