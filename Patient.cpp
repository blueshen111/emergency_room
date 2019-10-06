#include "Patient.h"
using namespace std;



    // constructor
    Patient::Patient (string patientName, int patientSeverity){
        name = patientName;
        severity = patientSeverity;

    }

    string Patient::getName() const{
        return name;

    }

//    void Patient::setName(){
//
//
//    }

    int Patient::getSeverity() const{
        return severity;
}


    ostream& operator<<(ostream& ostr, const Patient& pat){
        ostr << pat.getName() << ", " << pat.getSeverity() << endl;
        return ostr;

    }



