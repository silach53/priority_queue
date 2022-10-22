//
// Created by MrFentazis on 11.10.2022.
//
#include <stdio.h>
#include "QueueP/ClikeQueueP.h"

int main() {
    struct QueueP* q = makeQueueP();
    for(int i=10; i>0; --i)
        pushQueueP(q, i);

    while (!isEmptyQueueP(q)) {
        printf("%d ", topQueueP(q));
        popQueueP(q);
    }

    return 0;
}