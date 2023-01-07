#ifndef WORKING_Q2_BACHELOR_H
#define WORKING_Q2_BACHELOR_H

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <typeinfo>

using namespace std;

class Bachelor {
public:
    Bachelor(const string &, const string &, const string &, const string &);

    void setFirstName(const string &);
    void setLastName(const string &);
    void setUniversity(const string &);
    void setTitle(const string &);

    string const getFirstName();
    string const getLastName();
    string const getUniversity();
    string const getTitle();

    virtual const void printResume() ;
    double virtual performance() = 0;

private:
    string firstName;
    string lastName;
    string university;
    string title;

};


#endif //WORKING_Q2_BACHELOR_H
