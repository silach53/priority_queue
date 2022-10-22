//
// Created by MrFentazis on 11.10.2022.
//

#ifndef PIVOVAROV_A_V_CLIKEQUEUEP_H
#define PIVOVAROV_A_V_CLIKEQUEUEP_H
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif

    struct QueueR;

    //struct QueueP *callQueueP();
    struct QueueR* makeQueueR();

    //int callPopQueueP(struct QueueP *q);
    void popQueueR(struct QueueR* q);

    //int callTopQueueP(struct QueueP *q);
    int topQueueR(struct QueueR* q);

    //void callPushQueueP(struct QueueP *q, int &data);
    void pushQueueR(struct QueueR* q, int data);

    //bool callEmptyQueueP(struct QueueP *q);
    bool isEmptyQueueR(struct QueueR* q);

    //int callGetLengthQueueP(struct QueueP *q);
    int getLengthQueueR(struct QueueR* q);

#ifdef __cplusplus
};
#endif

#endif //PIVOVAROV_A_V_CLIKEQUEUEP_H
