#ifndef PATIENT_PATIENT_H
#define PATIENT_PATIENT_H
#include <iostream>
using namespace std;

class Patient{


private:
    string name;
    int severity;

public:
    // default constructor
    Patient() : name(""), severity(0) {}
    // constructor
    Patient (string name, int severity);

    string getName() const;

    int getSeverity() const;

    friend ostream& operator<<(ostream& ostr, const Patient& pat);
};

    ostream& operator<<(ostream& ostr, const Patient& pat);



#endif
