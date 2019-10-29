#include <stdbool.h>
#include "SharedData.h"
#include "GasDisplayThread.h"
#include "log/log.h"

#define LOG_ENABLE true

void GasDisplayThread_run(void)
{
    static int count = 0;
    debug_printf(LOG_ENABLE, LOG_INFO, "task run %d\n", ++count);
    debug_printf(LOG_ENABLE, LOG_INFO, "Measured Gas Flow %d\n", measuredGasFlow);
    debug_printf(LOG_ENABLE, LOG_INFO, "commanded Gas Flow %d\n", commandedGasFlow);
}
