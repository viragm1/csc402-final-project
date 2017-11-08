//
// Created by matev on 11/20/2016.
//
//This class stores all the patients regardless of their status in a vector. This is needed so
//when the user searches for the report of a specific patient, it can easily be returned.

#ifndef PROJECT_3_ALLPATIENTSVECTOR_H
#define PROJECT_3_ALLPATIENTSVECTOR_H

#include <vector>
#include <iostream>
#include "Patient.h"
#include "Logger.h"

class AllPatientsVector {
    public:
        explicit AllPatientsVector();
        void addPatient(const Patient& patient);
        void printSpecifiedPatient(const string& firstName, const string& lastName) const;
    private:
        vector<Patient> allPatients;
};


#endif //PROJECT_3_ALLPATIENTSVECTOR_H
