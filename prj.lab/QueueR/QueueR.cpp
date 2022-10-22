//
// Created by mrfentazis on 28.09.22.
//
#include "QueueR.hpp"
#include <algorithm>

QueueR::Node::Node(int data, Node* next) {
    this->data = data;
    this->next = next;
}

QueueR::QueueR() {
    this->len = 0;
    this->head = nullptr;
}

QueueR::QueueR(const std::vector<int>& v) {
    for(int elem : v) {
        push(elem);
    }

    this->len = v.size();
}

QueueR::QueueR(const int* mas, const int len) {
    for(int i=0; i<len; ++i) {
        push(mas[i]);
    }

    this->len = len;
}

void QueueR::push(const int& data) {
    if (len) {
        if (data < head->data){
            head = new Node(data, head);
            ++len;
            return;
        }
        Node* counter = head;

        while( (counter->next != nullptr) && (counter->next->data < data)) {
            counter = counter->next;
        }

        counter->next = new Node(data, counter->next);
    }
    else
        head = new Node(data, nullptr);

    ++len;
}

void QueueR::pop() {
    if (len) {
        Node* temp = head->next;
        delete head;
        head = temp;
        --len;
    }
    /*
    else {
        throw QueueR::QueueOutOfRangeException();
    }
     */
}

const int& QueueR::top() const {
    if (len)
        return head->data;

    else
        throw QueueR::QueueOutOfRangeException();

}

bool QueueR::isEmpty() const {
    return len == 0;
}

QueueR::~QueueR() {
    while (!isEmpty())
        pop();
}


