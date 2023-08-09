#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
//    {"sb-mail",    600,  1 },
//    {"sb-music",   0,    2 },
//    {"sb-disk",    1800, 3 },
//    {"sb-memory",  10,   4 },
//    {"sb-loadavg", 5,    5 },
//    {"sb-mic",     0,    6 },
//    {"sb-record",  0,    7 },
    {"sb-updates", 1800, 1 },
    {"sb-network", 10,   2 },
    {"sb-up_down", 3,    3 },
    {"sb-memory",  10,   4 },
    {"sb-cpu",     5,    5 },
    {"sb-disk",    1800, 6 },
    {"sb-volume",  5,    7 },
    {"sb-battery", 10,   8 },
    {"sb-time",    1,    9 },
    {"sb-date",    1800, 10},
};

const unsigned short blockCount = LEN(blocks);
