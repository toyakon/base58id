#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "base58.h"


int main(int argc, char** argv)
{
    int i, ind, max=8;
    char id[58];

    if (argc > 1) {
        max = atoi(argv[1]);
    }

    srand(time(NULL));
    for (i = 0; i < max; i++) {
        ind = rand() % 57;
        id[i] = BASE58[ind];
    }
    id[i] = '\0';
    printf("%s\n", id);
    return 0;
}
