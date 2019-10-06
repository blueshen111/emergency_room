#ifndef PATIENT_HOSPITAL_H
#define PATIENT_HOSPITAL_H
#include "Patient.h"
#include <iostream>
#include <vector>
using namespace std;

class Hospital{

private:

    vector<Patient> patients;

public:
    Hospital();

    void add(Patient& patient) ;

    //void treat(string name) ;

    void treat();







    friend ostream& operator<<(ostream& ostr, const Hospital& hospital);

};

    ostream& operator<<(ostream& ostr, const Hospital& hospital);

#endif
