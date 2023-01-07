#include "Doctoral.h"

Doctoral::Doctoral(int noaMaster, int nopMaster, int noaDoctoral, int nopDoctoral, const string &first, const string &last, const string &_university,
                   const string &_title) : Master(noaMaster, nopMaster, first, last, _university, _title)
{
    setNOAPhd(noaDoctoral);
    setNOPPhd(nopDoctoral);
}

void Doctoral::setNOAPhd(int noa) {
    NOAPhd = noa < 0 ? 0 : noa;
}

int const Doctoral::getNOAPhd() {
    return NOAPhd;
}

void Doctoral::setNOPPhd(int nop) {
    NOPPhd = nop < 0 ? 0 : nop;
}

int const Doctoral::getNOPPhd() {
    return NOPPhd;
}

double Doctoral::performance() {
    return Master::performance() + 8.5 * getNOAPhd() + 26.5 * getNOPPhd();
}

void const Doctoral::printResume() {
    Master::printResume();
    cout << "NOA Phd: " << getNOAPhd() << "\nNOP Phd: " << getNOPPhd() << endl;
}

