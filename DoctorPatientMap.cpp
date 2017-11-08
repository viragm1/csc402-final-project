//
// Created by matev on 11/20/2016.
//

#include "DoctorPatientMap.h"

DoctorPatientMap::DoctorPatientMap() {}

//adds a patient to the map, the key is the name of the doctor since that's how we are storing the information
void DoctorPatientMap::addPatient(string &s, Patient &patient) {
    doctorPatientMap.insert(pair<string, Patient>(s, patient));
}

//prints out the list of patients based on their doctor
//checks to see if the name of the doctor is different and if it is then
//it prints out the new name and the patients belonging to that doctor
void DoctorPatientMap::printPatientsByDoctor() const {
    if (doctorPatientMap.empty()) {
        cout << "There is no patient in the system." << endl;
        Logger::GetLogger() -> log("The user tried to get a report of of all the patients in the system ordered by their doctor, but there is no patients currently in the system\r\n");
    }
    else {
        int counter = 0;
        string doctorName = doctorPatientMap.begin() -> first;
        multimap<string, Patient>::const_iterator constIter;
        cout << "Here is a report of all patients in the system ordered by their doctors: " << endl << endl;
        cout << "Doctor " << capitalizeFirstLetter(doctorName) << "'s Patient(s): " << endl;
        for (constIter = doctorPatientMap.begin(); constIter != doctorPatientMap.end(); ++constIter) {
            if (constIter -> first == doctorName) {
                cout << endl;
                constIter -> second.printReport();
                counter++;
            }
            else {
                cout << "This is the end of the list of Doctor " << capitalizeFirstLetter(doctorName) << "'s Patient(s). Total number of "
                     << capitalizeFirstLetter(doctorName) << "'s Patient(s) is: " << counter << endl << endl;
                counter = 0;
                doctorName = constIter -> first;
                cout << "Doctor " << capitalizeFirstLetter(doctorName) << "'s Patient(s): " << endl;
                constIter -> second.printReport();
                counter++;
                cout << endl;
            }
        }
        cout << "This is the end of the list of Doctor " << capitalizeFirstLetter(doctorName) << "'s Patient(s). Total number of "
             << capitalizeFirstLetter(doctorName) << "'s Patient(s) is: " << counter << endl << endl;

        Logger::GetLogger() -> log("The user got a report of all the patients in the system ordered by their doctor\r\n");
    }
}

//capitalizes the first letter of a string, used for reporting
string DoctorPatientMap::capitalizeFirstLetter(string s) const {
    if (s.length() > 0)
        s[0] = toupper(s[0]);
    return s;
}


