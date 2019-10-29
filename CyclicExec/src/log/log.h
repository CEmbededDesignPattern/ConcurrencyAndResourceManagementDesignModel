#if !defined(_LOG_H_)
#define _LOG_H_
#include <stdio.h>

enum {
    LOG_ERR,
    LOG_WARN,
    LOG_INFO,
    LOG_DEBUG
};

#define LOG_LEVEL LOG_INFO

#define debug_printf(enable, level, fmt, ...)                                             \
    if (enable)                                                                           \
    {                                                                                     \
        if (level <= LOG_LEVEL)                                                           \
        {                                                                                 \
            printf("[%s][%s][%d]:" fmt, __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__); \
        }                                                                                 \
    }

#endif // _LOG_H_
