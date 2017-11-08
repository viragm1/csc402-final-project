//
// Created by matev on 11/20/2016.
//


#include "AllPatientsVector.h"

AllPatientsVector::AllPatientsVector() {}

//simply adds a patient to the list
void AllPatientsVector::addPatient(const Patient &patient) {
    allPatients.push_back(patient);
}

//searched for the desired patient and prints its information if the patient is in the system
void AllPatientsVector::printSpecifiedPatient(const string& firstName, const string& lastName) const {
    if (allPatients.empty()) {
        cout << "There is no patients in the system, so the report cannot be found." << endl;
        Logger::GetLogger() -> log("The user tried to get a report of a patient in the system, but there is no patients currently in the system\r\n");
    }
    else {
        bool isFound = false;
        vector<Patient>::const_iterator constIter;
        for (constIter = allPatients.begin(); constIter != allPatients.end(); ++constIter) {
            if (constIter -> getFirstName() == firstName && constIter -> getLastName() == lastName) {
                cout << "Here is the patient's report: " << endl << endl;
                constIter->printReport();
                isFound = true;
                Logger::GetLogger() -> log("The user got a report of a patient in the system\r\n");
            }
        }

        if (!isFound) {
            cout << "The given patient is not in the system." << endl;
            Logger::GetLogger() -> log("The user tried to get a report of a patient in the system, but the patient is not in the system\r\n");
        }
    }
}