//
// Created by MrFentazis on 11.10.2022.
//
#include <stdio.h>
#include "QueueR/ClikeQueueR.h"

int main() {

    struct QueueR* q = makeQueueR();
    for(int i=10; i>0; --i)
        pushQueueR(q, i);

    while (!isEmptyQueueR(q)) {
        printf("%d ", topQueueR(q));
        popQueueR(q);
    }

    return 0;
}