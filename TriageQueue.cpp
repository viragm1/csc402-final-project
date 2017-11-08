//
// Created by matev on 11/20/2016.
//

#include "TriageQueue.h"

TriageQueue::TriageQueue() {}

//simply adds a patient
void TriageQueue::addPatient(const Patient &patient) {
    triageQueue.push(patient);
}

//treats one patient, removes it from the priority queue and places the patient in the treated vector
//waits between 1 and 3 seconds to display the output
void TriageQueue::treatPatient(TreatedVector& treatedVector) {
    if (triageQueue.empty()) {
        cout << "There is no patient to treat in the triage system." << endl;
        Logger::GetLogger()->log("The user tried to treat a patient in the triage system, but it was empty\r\n");
    }
    else {
        Patient patient = triageQueue.top();
        triageQueue.pop();
        patient.treatPatient();
        treatedVector.addPatient(patient);

        srand(time(NULL));
        int sleepTime = rand() % 2000 + 1000;
        this_thread::sleep_for(chrono::milliseconds(sleepTime));

        cout << "The patient has been treated." << endl;
        Logger::GetLogger() -> log("The user treated a patient in the triage system\r\n");
    }
}

//treats all the patients, removes them from the priority queue and places them in the treated vector
//waits between 1 and 3 seconds to display the output
void TriageQueue::treatAllPatients(TreatedVector &treatedVector) {
    if (triageQueue.empty()) {
        cout << "There is no patient to treat in the triage system." << endl;
        Logger::GetLogger() -> log("The user tried to treat all the patients in the triage system, but it was empty\r\n");
    }
    else {
        while (!triageQueue.empty()) {
            Patient patient = triageQueue.top();
            triageQueue.pop();
            patient.treatPatient();
            treatedVector.addPatient(patient);
        }

        srand(time(NULL));
        int sleepTime = rand() % 2000 + 1000;
        this_thread::sleep_for(chrono::milliseconds(sleepTime));

        cout << "All the patients have been treated." << endl;
        Logger::GetLogger() -> log("The user treated all the patients in the triage system\r\n");
    }
}

//gives a report of the next patient to be treated
void TriageQueue::printNextPatient() const {
    if (triageQueue.empty()) {
        cout << "There is no patient in the triage system." << endl;
        Logger::GetLogger() -> log("The user tried to get a report of the next patient in the triage system, but it was empty\r\n");
    }
    else {
        cout << "\nThe next patient to be treated is: " << endl << endl;
        triageQueue.top().printReport();
        Logger::GetLogger() -> log("The user got a report of the next patient in the triage system\r\n");
    }
}

//provides a report of all the patients that are in the triage system
void TriageQueue::printAllPatients() const {
    if (triageQueue.empty()){
        cout << "There is no patient in the triage system." << endl;
        Logger::GetLogger()->log("The user tried to get a report of all the patients in the triage system, but it was empty\r\n");
    }
    else {
        priority_queue<Patient, vector<Patient>, greater<Patient>> copiedQueue(triageQueue);
        cout << "Here is a report of all patients in the triage system: " << endl << endl;
        while (!copiedQueue.empty()) {
            copiedQueue.top().printReport();
            copiedQueue.pop();
            cout << endl;
        }
        Logger::GetLogger() -> log("The user got a report of all the patients in the triage system\r\n");
    }
}
