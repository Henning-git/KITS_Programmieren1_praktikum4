#include "Mensch.h"

Mensch::Mensch(Herzschrittmacher herzschrittmacher): herzschrittmacher(herzschrittmacher) {}

void Mensch::setObject(SmartWatch *smartWatch) {
    this->smartWatch = smartWatch;
}

void Mensch::gibLaut() {
    cout << herzschrittmacher.gibLaut() << endl
         << herz.gibLaut() << endl
         << smartWatch->gibLaut() << endl;
}
