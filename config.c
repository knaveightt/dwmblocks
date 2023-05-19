#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"spade-bar-ram",     60,    3 },
    {"spade-bar-batt",    60,    1 },
    {"spade-bar-date",    60,    2 },
};

const unsigned short blockCount = LEN(blocks);
