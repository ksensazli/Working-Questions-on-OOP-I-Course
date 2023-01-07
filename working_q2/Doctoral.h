#ifndef WORKING_Q2_DOCTORAL_H
#define WORKING_Q2_DOCTORAL_H

#include "Master.h"

class Doctoral : public Master{
public:
    Doctoral(int,int, int, int, const string &, const string &, const string &, const string &);

    void setNOAPhd(int);
    void setNOPPhd(int);

    int const getNOAPhd();
    int const getNOPPhd();

    virtual const void printResume() ;
    virtual double performance();

private:
    int NOAPhd;
    int NOPPhd;
};


#endif //WORKING_Q2_DOCTORAL_H
