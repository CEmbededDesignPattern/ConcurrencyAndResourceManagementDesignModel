#include <stdbool.h>
#include "GasSensorThread.h"
#include "SharedData.h"
#include "log/log.h"

#define LOG_ENABLE true

void GasSensorThread_run(void)
{
    static int count = 0;
    debug_printf(LOG_ENABLE, LOG_INFO, "task run %d\n", ++count);
    commandedGasFlow = count * 5;
    measuredGasFlow = count * 10;
}
