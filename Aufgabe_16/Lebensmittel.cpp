#include "Lebensmittel.h"

Lebensmittel::Lebensmittel(string name) {
    cout << "Lebensmittel Konstruktor" << endl;
}

Lebensmittel::~Lebensmittel() {
    cout << "Lebensmittel Destruktor" << endl;
}

void Lebensmittel::zubereiten() {
    cout << "Lebensmittel zubereiten" << endl;
}
