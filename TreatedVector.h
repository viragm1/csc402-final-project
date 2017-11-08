//
// Created by matev on 11/20/2016.
//
//Creates a vector to store all the patients that have already been treated. Provides an easy way to add patients and to
//print all of their reports.

#ifndef PROJECT_3_TREATEDVECTOR_H
#define PROJECT_3_TREATEDVECTOR_H

#include <vector>
#include <iostream>
#include "Patient.h"
#include "Logger.h"

class TreatedVector {
public:
    explicit TreatedVector();
    void addPatient(const Patient& patient);
    void printAllTreatedPatients() const;
private:
    vector<Patient> treatedPatients;
};


#endif //PROJECT_3_TREATEDVECTOR_H
