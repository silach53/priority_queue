//
// Created by MrFentazis on 11.10.2022.
//
#include "QueueP.hpp"
#include "ClikeQueueP.h"

extern "C" {
    struct QueueP* makeQueueP() {
        return new QueueP();
    };

    void popQueueP(struct QueueP* q) {
        q->pop();
    };

    int topQueueP(struct QueueP* q) {
        return q->top();
    }

    void pushQueueP(struct QueueP* q, int data) {
        q->push(data);
    }

    bool isEmptyQueueP(struct QueueP* q) {
        return q->isEmpty();
    }

    int getLengthQueueP(struct QueueP* q) {
        return q->getLength();
    }
};