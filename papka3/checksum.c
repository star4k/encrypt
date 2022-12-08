#include "checksum.h"

int checksum(char *messgae) {
    int c = 0;
    while (*messgae) {
        c += c ^ (int)(*messgae);
        messgae++;
    }
    return c;
}
