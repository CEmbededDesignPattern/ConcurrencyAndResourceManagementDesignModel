#include <stdbool.h>
#include "GasActuatorThread.h"
#include "SharedData.h"
#include "log/log.h"

#define LOG_ENABLE true

void GasActuatorTHread_run(void)
{
    static int count = 0;
    debug_printf(LOG_ENABLE, LOG_INFO, "task run %d\n", ++count);

    if (measuredGasFlow > 100)
    {
        debug_printf(LOG_ENABLE, LOG_WARN, "warn:gas flow too big-%d\n", measuredGasFlow);
    }
}