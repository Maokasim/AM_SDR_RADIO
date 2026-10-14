#include "logger.h"

int main(void)
{
    Logger log;
    log.logMsg("Program started");
    log.logErr("Test error");

    return 0;
}