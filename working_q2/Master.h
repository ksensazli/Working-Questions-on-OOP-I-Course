#ifndef WORKING_Q2_MASTER_H
#define WORKING_Q2_MASTER_H

#include "Bachelor.h"

class Master : public Bachelor{
public:
    Master(int,int, const string &, const string &, const string &, const string &);

    void setNOAMaster(int);
    void setNOPMaster(int);

    int const getNOAMaster();
    int const getNOPMaster();

    virtual const void printResume() ;
    virtual double performance();

private:
    int NOAMaster;
    int NOPMaster;

};


#endif //WORKING_Q2_MASTER_H
