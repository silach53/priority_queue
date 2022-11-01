//
// Created by MrFentazis on 11.10.2022.
//

#ifndef PIVOVAROV_A_V_CLIKEQUEUEP_H
#define PIVOVAROV_A_V_CLIKEQUEUEP_H
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif

    struct QueueP;

    //struct QueueP *callQueueP();
    struct QueueP* makeQueueP();

    //int callPopQueueP(struct QueueP *q);
    void popQueueP(struct QueueP* q);

    //int callTopQueueP(struct QueueP *q);
    int topQueueP(struct QueueP* q);

    //void callPushQueueP(struct QueueP *q, int &data);
    void pushQueueP(struct QueueP* q, int data);

    //bool callEmptyQueueP(struct QueueP *q);
    bool isEmptyQueueP(struct QueueP* q);

    //int callGetLengthQueueP(struct QueueP *q);
    int getLengthQueueP(struct QueueP* q);

#ifdef __cplusplus
};
#endif

#endif //PIVOVAROV_A_V_CLIKEQUEUEP_H
