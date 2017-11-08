//
// Created by matev on 11/20/2016.
//

#include "TreatedVector.h"

TreatedVector::TreatedVector() {}

//adds a patient to the list
void TreatedVector::addPatient(const Patient &patient) {
    treatedPatients.push_back(patient);
}

//prints all of the reports by using an iterator through the vector
void TreatedVector::printAllTreatedPatients() const {
    if (treatedPatients.empty()) {
        cout << "There is no treated patient in the system." << endl;
        Logger::GetLogger() -> log("The user tried to get a report of all the treated patients in the system, but there is no treated patients currently in the system\r\n");
    }
    else {
        vector<Patient>::const_iterator constIter;
        cout << "Here is a report of all treated patients in the system: " << endl << endl;
        for (constIter = treatedPatients.begin(); constIter != treatedPatients.end(); ++constIter) {
            constIter->printReport();
            cout << endl;
        }
        Logger::GetLogger() -> log("The user got a report of all the treated patients in the system\r\n");
    }
}

