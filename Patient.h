//
// Created by matev on 11/15/2016.
//
//Defines the patient class with its variables. Prints their information and capitalizes the first letters.

#ifndef PROJECT_3_PATIENT_H
#define PROJECT_3_PATIENT_H

#include <string>
#include <vector>

using namespace std;

class Patient {
public:
    explicit Patient(const string &fn, const string &mn, const string &ln, const string &s, vector<string> a, string &d, bool t, int p);
    string getFirstName() const;
    string getMiddleName() const;
    string getLastName() const;
    string getSuffix() const;
    vector<string> getAilments() const;
    string getDoctor() const;
    bool getTreated() const;
    int getPriority() const;
    bool treatPatient();
    void printReport() const;
    bool operator>(const Patient& rhs) const;

private:
    string firstName;
    string middleName;
    string lastName;
    string suffix;
    vector<string> ailments;
    string doctor;
    bool treated;
    int priority;
    string capitalizeFirstLetter(string s) const;
};


#endif //PROJECT_3_PATIENT_H
