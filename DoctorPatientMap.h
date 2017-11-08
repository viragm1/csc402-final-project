//
// Created by matev on 11/20/2016.
//
//Creates a multimap to store the patients with their doctor being the key. Provides an easy way to print out patients by their doctors.

#ifndef PROJECT_3_DOCTORPATIENTMAP_H
#define PROJECT_3_DOCTORPATIENTMAP_H

#include <map>
#include <iostream>
#include "Patient.h"
#include "Logger.h"

class DoctorPatientMap {
    public:
        explicit DoctorPatientMap();
        void addPatient(string &s, Patient &patient);
        void printPatientsByDoctor() const;
    private:
        multimap<string, Patient> doctorPatientMap;
        string capitalizeFirstLetter(string s) const;
};


#endif //PROJECT_3_DOCTORPATIENTMAP_H
