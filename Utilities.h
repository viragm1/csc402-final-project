//
// Created by matev on 11/20/2016.
//
//Provide some helper functions, such as trimming and lowercasing strings, and creating the ailment vector for inputs.

#ifndef PROJECT_3_UTILITIES_H
#define PROJECT_3_UTILITIES_H

#include <string>
#include <sstream>

// trim from start
static inline string& leftTrim(string& s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
    return s;
}

// trim from end
static inline string& rightTrim(string& s) {
    s.erase(find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(), s.end());
    return s;
}

// trim from both ends
static inline string& trim(string& s) {
    return leftTrim(rightTrim(s));
}

void lowerCaseString(string& s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
}

void createAilmentVector(vector<string>& v, string s) {
    stringstream ss;
    ss.str(s);
    string item;
    while (getline(ss, item, ',')) {
        trim(item);
        v.push_back(item);
    }
}

#endif //PROJECT_3_UTILITIES_H
