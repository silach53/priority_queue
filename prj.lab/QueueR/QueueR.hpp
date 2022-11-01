//
// Created by mrfentazis on 28.09.22.
//

#pragma once
#ifndef PIVOVAROV_A_V_QUEUER_HPP
#define PIVOVAROV_A_V_QUEUER_HPP

#include <iosfwd>
#include <string>
#include <stdexcept>
#include <vector>

class QueueR {
private:
    class Node {
    private:
        int data = 0;
        Node* next = nullptr;

    public:
        Node(int data, Node* next);
        ~Node() = default;
        //~Node();
    friend class QueueR;
    };

    Node* head = nullptr;
    int len = 0;

public:
    class QueueOutOfRangeException : public std::runtime_error {
    public:
        QueueOutOfRangeException(std::string message="error: queue out of range") :
                std::runtime_error(message) {}
    };

    QueueR();
    QueueR(QueueR&) = delete;
    QueueR(QueueR&&) = default;
    QueueR(const std::vector<int>& v);
    QueueR(const int* mas, const int len);

    void push(const int& data);
    void pop();

    bool isEmpty() const;
    const int& top() const;
    int getLength() const {return len;}

    QueueR& operator=(QueueR&&) = default;
    QueueR& operator=(const QueueR&) = delete;
    ~QueueR();
};

#endif //PIVOVAROV_A_V_QUEUER_HPP
