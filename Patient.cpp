//
// Created by matev on 11/15/2016.
//

#include "Patient.h"
#include <iostream>

Patient::Patient(const string &fn, const string &mn, const string &ln, const string &s, vector<string> a, string &d, bool t, int p):
    firstName(fn), middleName(mn), lastName(ln), suffix(s), ailments(a), doctor(d), treated(t), priority(p) {}

string Patient::getFirstName() const {
    return firstName;
}

string Patient::getMiddleName() const {
    return middleName;
}

string Patient::getLastName() const {
    return lastName;
}

string Patient::getSuffix() const {
    return suffix;
}

vector<string> Patient::getAilments() const {
    return ailments;
}

string Patient::getDoctor() const {
    return doctor;
}

bool Patient::getTreated() const {
    return treated;
}

int Patient::getPriority() const {
    return priority;
}

//treats the patient
bool Patient::treatPatient() {
    treated = true;
    return true;
}

//prints out the report of a patient with capitalized letters and with a list of ailments
void Patient::printReport() const {
    string report, ailmentReport;
    string treatedYesNo = (treated) ? "Yes" : "No";
    for (int i = 0; i < ailments.size(); i++) {
        ailmentReport += ailments[i] + ", ";
    }
    ailmentReport = ailmentReport.substr(0, ailmentReport.length() - 2);

    report = "First Name: " + capitalizeFirstLetter(firstName) + "\nMiddle Name: " + capitalizeFirstLetter(middleName) + "\nLast Name: " +
            capitalizeFirstLetter(lastName) + "\nSuffix: " + capitalizeFirstLetter(suffix) + "\nAilments: " + ailmentReport +
            "\nDoctor: " + capitalizeFirstLetter(doctor) + "\nTreated: " + treatedYesNo + "\nPriority: " + to_string(priority);
    cout << report << endl;
}

//this is used for comparing patients when inserting them in the priority queue
//if the priority of one patient is lower than the other's then the patient will be higher in the list
bool Patient::operator> (const Patient& rhs) const {
    if (priority >= rhs.priority)
        return true;
    else
        return false;
}

//capitalizes the first letter of a string, used for reporting
string Patient::capitalizeFirstLetter(string s) const {
    if (s.length() > 0)
        s[0] = toupper(s[0]);
    return s;
}
