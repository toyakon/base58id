#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "base58.h"

void create_id(int len, char* res)
{
    int i;
    
    srand(time(NULL));

    for (i = 0; i < len; i++) {
        res[i] = BASE58[rand() % sizeof(BASE58)];
    }
    res[i] = '\0';
}
int main(int argc, char** argv)
{
    int max = 8;
    char id[sizeof(BASE58)];

    if (argc > 1) {
        max = atoi(argv[1]);
    }

    create_id(max, id);
    printf("%s\n", id);
    return 0;
}
