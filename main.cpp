#include <iostream>
#include "Patient.h"
#include "Hospital.h"
#include <vector>

using namespace std;

int main()
{



//cin >> input;

//    Patient bob {"Bob", 9};
//    Patient dan {"Dan", 5};
//    Patient sam {"Sam", 7};
//    Patient bill {"Bill", 8};
//
//
//
//    //cout << bob;
//
//
 // Hospital myHospital;
//
////    myHospital.add(bob);
////    myHospital.add(dan);
////    myHospital.add(sam);
////    myHospital.add(bill);
//
//
//
//    cout << myHospital << endl;
//
//    myHospital.treat();
//
//    cout << myHospital << endl;
//


Hospital myHospital;

while (true){

    //Hospital myHospital;
    int choice;
    string name;
    int severity;

    cout << "1.) Add Patient" << endl
         << "2.) Treat Patient" << endl
         << "3.) Quit" << endl;
// cin >> choice

	while(!(cin >> choice)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Please enter a number 1-3";
	}


//    while (choice != 1 && choice != 2 && choice != 3){
//    cout << "please enter a valid input" << endl;
//    cin >> choice;
//
//
//}



    if (choice == 1 ){

        cout << "Please enter patient name" << endl;

        cin >> name;

        cout << "Please enter severity of patient condition (positive whole number)" << endl;

        while(!(cin >> severity)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a number" << endl;
        }


    while (severity < 0){
        if (severity < 0){
            cout << "Please enter a POSITIVE number" << endl;
            cin >> severity;
        }
    }
        //cin >> severity;

        Patient patient {name, severity};
        myHospital.add(patient);
        cout << myHospital << endl;

    }


    if (choice == 2 ){

        myHospital.treat();
    }


    if (choice == 3){

        break;
    }
}



}

