#include "Bachelor.h"

Bachelor::Bachelor(const string &first, const string &last, const string &_university, const string &_title)
        : firstName(first), lastName(last), university(_university), title(_title) {

}

void Bachelor::setFirstName(const string &first) {
    firstName = first;
}

void Bachelor::setLastName(const string &last) {
    lastName = last;
}

void Bachelor::setUniversity(const string &_university) {
    university = _university;
}

void Bachelor::setTitle(const string &_title) {
    title = _title;
}

string const Bachelor::getFirstName() {
    return firstName;
}

string const Bachelor::getLastName() {
    return lastName;
}

string const Bachelor::getUniversity() {
    return university;
}

string const Bachelor::getTitle() {
    return title;
}

void const Bachelor::printResume()  {
    cout << "Name: " << getFirstName() << "\nSurname: " << getLastName() << "\nTitle: " << getTitle() << endl;
}
