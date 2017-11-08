//
// Created by matev on 11/20/2016.
//
//Creates a priority queue to serve as the triage system. The order is based on the priorities. Lower priorities are
//higher in the list. Uses the operator> implemented in patient to determine the order.

#ifndef PROJECT_3_TRIAGEQUEUE_H
#define PROJECT_3_TRIAGEQUEUE_H

#include <queue>
#include <iostream>
#include <chrono>
#include <thread>
#include "Patient.h"
#include "TreatedVector.h"
#include "Logger.h"

class TriageQueue {
    public:
        explicit TriageQueue();
        void addPatient(const Patient& patient);
        void treatPatient(TreatedVector& treatedVector);
        void treatAllPatients(TreatedVector& treatedVector);
        void printNextPatient() const;
        void printAllPatients() const;
    private:
        priority_queue<Patient, vector<Patient>, greater<Patient>> triageQueue;
};


#endif //PROJECT_3_TRIAGEQUEUE_H
