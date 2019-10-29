#include "src/GasActuatorThread.h"
#include "src/GasDisplayThread.h"
#include "src/GasSensorThread.h"
#include <stdbool.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{

    while (true)
    {
        GasSensorThread_run();
        GasDisplayThread_run();
        GasActuatorTHread_run();
        sleep(5);
    }

    return 0;
}
