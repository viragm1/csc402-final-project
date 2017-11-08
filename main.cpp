#include <iostream>
#include <fstream>
#include <algorithm>
#include "Patient.h"
#include "Utilities.h"
#include "TriageQueue.h"
#include "DoctorPatientMap.h"
#include "AllPatientsVector.h"

using namespace std;

void addPatient();
void receiveInputCommand();
void addPatientsFromFile(string&);
void createPatientFromVector(vector<string>&);
string getLogPath();

TriageQueue triageQueue = TriageQueue();
TreatedVector treatedVector = TreatedVector();
DoctorPatientMap doctorPatientMap = DoctorPatientMap();
AllPatientsVector allPatientsVector = AllPatientsVector();
const string Logger::fileName = getLogPath();

int main() {
    //main only kicks off the program by calling the function that does the input
    receiveInputCommand();

    return 0;
}

void receiveInputCommand() {
    string input = "";

    //this function loops for input until the user types the command to exit the program
    //it also decides what action to carry out based on the inputted command
    //all the commands are self explanatory and are made for easy interaction, -help gives a list of commands
    while (true) {
        cout << "Please enter a command, type -help to view a list of commands, or -exit to exit the application. " <<
             "Please press enter after every command entered." << endl;
        getline(cin, input);
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        if (input == "-exit") {
            Logger::GetLogger() -> log("The user exited the program\r\n");
            exit(0);
        }
        else if (input == "-help")
            cout << "Here is the guide for commands: " << endl << "To add a patient: -add" << endl
                 << "To add patients from a file: -addfromfile" << endl
                 << "To treat a patient: -treat" << endl << "To treat all patients: -treatall" << endl
                 << "To get a report of the next patient to be treated: -nextpatient" << endl
                 << "To get a report of a specific patient: -getreport" << endl
                 << "To get a report of all treated patients: -treatedreport" << endl
                 << "To get a report of all patients in the triage system: -triagereport" << endl
                 << "To get a report of all patients by doctor: -doctorreport" << endl;
        else if (input == "-add")
            addPatient();
        else if (input == "-addfromfile") {
            string fileLocation;
            cout << "Please enter the location of the file that contains the patient information: ";
            getline(cin, fileLocation);
            addPatientsFromFile(fileLocation);
        }
        else if (input == "-treat") {
            triageQueue.treatPatient(treatedVector);
        }
        else if (input == "-treatall") {
            triageQueue.treatAllPatients(treatedVector);
        }
        else if (input == "-nextpatient")
            triageQueue.printNextPatient();
        else if (input == "-getreport") {
            string firstName, lastName;

            cout << "Please enter the patient's information for the search: " << endl;
            cout << "First Name: ";
            getline(cin, firstName);
            cout << "Last Name: ";
            getline(cin, lastName);

            lowerCaseString(firstName);
            lowerCaseString(lastName);
            trim(firstName);
            trim(lastName);

            allPatientsVector.printSpecifiedPatient(firstName, lastName);
        }
        else if (input == "-treatedreport")
            treatedVector.printAllTreatedPatients();
        else if (input == "-triagereport")
            triageQueue.printAllPatients();
        else if (input == "-doctorreport")
            doctorPatientMap.printPatientsByDoctor();
        else
            cout << "Incorrect input";
        cout << endl;
    }
}

//adds a patient to the system by asking the user to input every information about the patient
//simple and easy to input everything
void addPatient() {
    string firstName, middleName, lastName, suffix, ailmentString, doctor, treatedString, priorityString;
    vector<string> ailments;
    bool treated;
    int priority;

    cout << "Please enter the patient's information: " << endl;
    cout << "First Name: ";
    getline(cin, firstName);
    cout << "Middle Name: ";
    getline(cin, middleName);
    cout << "Last Name: ";
    getline(cin, lastName);
    cout << "Suffix: ";
    getline(cin, suffix);
    cout << ("Ailments (Please list all ailments separated by commas): ");
    getline(cin, ailmentString);
    cout << "Name of Doctor: ";
    getline(cin, doctor);
    cout << "Has the patient been treated (yes/no): ";
    getline(cin, treatedString);
    cout << "Priority: ";
    getline(cin, priorityString);
    istringstream(priorityString) >> priority;

    lowerCaseString(firstName);
    lowerCaseString(middleName);
    lowerCaseString(lastName);
    lowerCaseString(suffix);
    lowerCaseString(doctor);

    createAilmentVector(ailments, ailmentString);

    treated = (treatedString == "yes") ? true : false;

    Patient patient = Patient(firstName, middleName, lastName, suffix, ailments, doctor, treated, priority);

    //based on if the patient has been treated or not, it is put into either the treated list or the triage system
    if (treated)
        treatedVector.addPatient(patient);
    else
        triageQueue.addPatient(patient);

    //every patient is inserted into a general list that stores every patient, and into the mapping with their doctor
    doctorPatientMap.addPatient(doctor, patient);
    allPatientsVector.addPatient(patient);

    cout << "The patient has been added." << endl;
    Logger::GetLogger() -> log("The user added a patient to the system\r\n");
}

//adds patients from a file input that the user specifies
//the file input path is entered simply by the user and then the patients are created
//followed the convention that every patient is separated by an empty line and every piece of
//information is on a new line
//this function creates a vector that stores the information about each patient in a raw format and not as
//variables describing the patient
void addPatientsFromFile(string& fileLocation) {
    string line;
    vector<string> rawPatientData;
    ifstream patientFile(fileLocation, ios::in);
    if (patientFile.is_open()) {
        while (!patientFile.eof()) {
            getline (patientFile, line);
            if (!line.empty()) {
                rawPatientData.push_back(line);
            }
            else {
                createPatientFromVector(rawPatientData);
                rawPatientData.clear();
            }
        }
        if (!rawPatientData.empty())
            createPatientFromVector(rawPatientData);

        patientFile.close();
    }
    cout << "All the patients have been added from the file." << endl;
    Logger::GetLogger() -> log("The user added patients to the system from a file\r\n");
}

//this function processes the raw input vector by deciding which information belongs to which
//variable and by trimming the string so only the important piece of information os left
//everything is stored as lowercase strings for easy searching and systematic inserting
//the first letters are capitalized for output
void createPatientFromVector(vector<string>& v) {
    string firstName, middleName, lastName, suffix, doctor;
    vector<string> ailments;
    bool treated = false;
    int priority = 0;
    vector<string>::const_iterator constIter;

    for (constIter = v.begin(); constIter != v.end(); ++constIter) {
        string rawString = *constIter;
        lowerCaseString(rawString);

        string variableName;
        size_t position, length;

        if (rawString.find("firstname") != string::npos) {
            variableName = "firstname";
            position = rawString.find(variableName);
            length = variableName.length();
            rawString.erase(position, length);
            if (rawString.find(':') != string::npos) {
                position = rawString.find(':');
                rawString.erase(position, position + 1);
            }
            trim(rawString);
            firstName = rawString;
        }
        else if (rawString.find("middlename") != string::npos) {
            variableName = "middlename";
            position = rawString.find(variableName);
            length = variableName.length();
            rawString.erase(position, length);
            if (rawString.find(':') != string::npos) {
                position = rawString.find(':');
                rawString.erase(position, position + 1);
            }
            trim(rawString);
            middleName = rawString;
        }
        else if (rawString.find("lastname") != string::npos) {
            variableName = "lastname";
            position = rawString.find(variableName);
            length = variableName.length();
            rawString.erase(position, length);
            if (rawString.find(':') != string::npos) {
                position = rawString.find(':');
                rawString.erase(position, position + 1);
            }
            trim(rawString);
            lastName = rawString;
        }
        else if (rawString.find("suffix") != string::npos) {
            variableName = "suffix";
            position = rawString.find(variableName);
            length = variableName.length();
            rawString.erase(position, length);
            if (rawString.find(':') != string::npos) {
                position = rawString.find(':');
                rawString.erase(position, position + 1);
            }
            trim(rawString);
            suffix = rawString;
        }
        else if (rawString.find("ailment") != string::npos) {
            variableName = "ailment";
            position = rawString.find(variableName);
            length = variableName.length();
            rawString.erase(position, length);
            if (rawString.find(':') != string::npos) {
                position = rawString.find(':');
                rawString.erase(position, position + 1);
            }
            trim(rawString);
            ailments.push_back(rawString);
        }
        else if (rawString.find("doctor") != string::npos) {
            variableName = "doctor";
            position = rawString.find(variableName);
            length = variableName.length();
            rawString.erase(position, length);
            if (rawString.find(':') != string::npos) {
                position = rawString.find(':');
                rawString.erase(position, position + 1);
            }
            trim(rawString);
            doctor = rawString;
        }
        else if (rawString.find("treated") != string::npos) {
            variableName = "treated";
            position = rawString.find(variableName);
            length = variableName.length();
            rawString.erase(position, length);
            if (rawString.find(':') != string::npos) {
                position = rawString.find(':');
                rawString.erase(position, position + 1);
            }
            trim(rawString);
            if (rawString == "1" || rawString == "true" || rawString == "yes")
                treated = true;
            else
                treated = false;
        }
        else if (rawString.find("priority") != string::npos) {
            variableName = "priority";
            position = rawString.find(variableName);
            length = variableName.length();
            rawString.erase(position, length);
            if (rawString.find(':') != string::npos) {
                position = rawString.find(':');
                rawString.erase(position, position + 1);
            }
            trim(rawString);
            istringstream(rawString) >> priority;
        }
    }

    Patient patient = Patient(firstName, middleName, lastName, suffix, ailments, doctor, treated, priority);

    //the patient is added to certain lists as before
    if (treated)
        treatedVector.addPatient(patient);
    else
        triageQueue.addPatient(patient);

    doctorPatientMap.addPatient(doctor, patient);
    allPatientsVector.addPatient(patient);
}

//the user can enter the path of the log file here
//simple user input
string getLogPath() {
    string logPath;
        cout << "Please enter the desired path and name of the log file: ";
    getline(cin, logPath);
    return logPath;
}

