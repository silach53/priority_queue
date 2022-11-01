//
// Created by MrFentazis on 11.10.2022.
//
#include "QueueR.hpp"
#include "ClikeQueueR.h"

extern "C" {
    struct QueueR* makeQueueR() {
        return new QueueR();
    };

    void popQueueR(struct QueueR* q) {
        q->pop();
    };

    int topQueueR(struct QueueR* q) {
        return q->top();
    }

    void pushQueueR(struct QueueR* q, int data) {
        q->push(data);
    }

    bool isEmptyQueueR(struct QueueR* q) {
        return q->isEmpty();
    }

    int getLengthQueueR(struct QueueR* q) {
        return q->getLength();
    }
};