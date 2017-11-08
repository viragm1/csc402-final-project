//
// Created by matev on 11/20/2016.
//

//creates a connection for the file and then uses the one singleton instance to print messages in the file
//keeps track of the user's activity for the whole period

#include "Logger.h"
Logger* Logger::thisLogger = NULL;
ofstream Logger::logfile;
Logger::Logger() {}

Logger* Logger::GetLogger(){
    if (thisLogger == NULL){
        thisLogger = new Logger();
        logfile.open(fileName.c_str(), ios::out | ios::app);
    }
    return thisLogger;
}

void Logger::log(const string& message)
{
    logfile << message << "\n";
}

