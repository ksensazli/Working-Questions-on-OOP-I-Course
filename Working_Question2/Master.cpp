#include "Master.h"

Master::Master(int noa, int nop, const string &first, const string &last, const string &_university,
               const string &_title) : Bachelor(first, last, _university, _title)
{
    setNOAMaster(noa);
    setNOPMaster(nop);
}

void Master::setNOAMaster(int noa) {
    NOAMaster = noa < 0 ? 0 : noa;
}

int const Master::getNOAMaster() {
    return NOAMaster;
}

void Master::setNOPMaster(int nop) {
    NOPMaster = nop < 0 ? 0 : nop;
}

int const Master::getNOPMaster() {
    return NOPMaster;
}

double Master::performance() {
    return 12.0 + 6.2 * getNOAMaster() + 14.5 * getNOPMaster();
}

void const Master::printResume() {
    Bachelor::printResume();
    cout << "NOA Master: " << getNOAMaster() << "\nNOP Master: " << getNOPMaster() << "\nPerformance: " << performance()
         << endl;
}
