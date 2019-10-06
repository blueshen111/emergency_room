#include "Hospital.h"
#include "Patient.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;



Hospital::Hospital() {}



    void Hospital::add(Patient& patient) {

        patients.push_back(patient);

    }

    void Hospital::treat() {
        Patient largestElement;
        int largestElementIndex;
        for (int i = 0; i < patients.size(); i++){



            if (largestElement.getSeverity() == NULL){
                //largestElement = patients.at(i);
                largestElementIndex = i;
            }


            if (patients.at(i).getSeverity() > largestElement.getSeverity()){
                largestElement = patients.at(i);
                largestElementIndex = i;
            }

        }

        cout << patients.at(largestElementIndex).getName() << " has been successfully treated!" << endl;

        patients.erase(patients.begin() + largestElementIndex);

        //cout << patients.at(2 + largestElementIndex).getName() << " has been successfully treated!" << endl;
    }




    ostream& operator << (ostream& ostr, const Hospital& hospital){
    ostr << "{ ";
        copy(begin(hospital.patients), end(hospital.patients) - 1,
        ostream_iterator<Patient>(ostr, "  "));

            if (hospital.patients.size() >= 0){

                ostr << hospital.patients.at(hospital.patients.size() - 1) << ' ';

            }

             if (hospital.patients.size() == 0){

             //   ostr << "treated successfully"<< ' ';

            }

                ostr << "       }";
                return ostr;

    }

