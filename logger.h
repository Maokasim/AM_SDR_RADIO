#ifndef LOGGER_H
#define LOGGER_H

#include <ctime>
#include <fstream>
#include <iomanip>
#include <string>

class Logger
{
public:
    Logger();
    void logMSG();
    void logErr(const std::string& msg);
};

#endif