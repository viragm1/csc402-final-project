//
// Created by matev on 11/20/2016.
//
//Singleton logger class that logs to a file specified by the user.

#ifndef PROJECT_3_LOGGER_H
#define PROJECT_3_LOGGER_H

#include <fstream>
#include <iostream>
#include <cstdarg>
#include <string>
using namespace std;

class Logger {
    public:
        void log(const string& message);
        static Logger* GetLogger();
        static const string fileName;
private:
    Logger();
    Logger(const Logger&){};             // copy constructor is private
    Logger& operator=(const Logger&){ return *this; };  // assignment operator is private
    static Logger* thisLogger;
    static ofstream logfile;
};


#endif //PROJECT_3_LOGGER_H
