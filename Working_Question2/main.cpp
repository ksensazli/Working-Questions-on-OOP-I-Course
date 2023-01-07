#include "Bachelor.h"
#include "Master.h"
#include "Doctoral.h"

int main() {
    vector<Bachelor *> bachelors(4);

    bachelors[0] = new Master(16,3,"Ricardo", "Charles", " ", "Research Assistant");
    bachelors[1] = new Master(4,1,"Jonas", "Benz", " ", "Research Assistant");
    bachelors[2] = new Doctoral(26,8,18,13, "Andrew", "Liang", " ", "Assistant Professor");
    bachelors[3] = new Doctoral(13,2,23,5, "Lilian", "Bartez", " ", "Professor");

    for (size_t i=0; i < bachelors.size(); i++)
    {
        bachelors[i]->printResume();
        cout << endl;
    }

    return 0;
}
