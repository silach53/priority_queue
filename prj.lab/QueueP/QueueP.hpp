//
// Created by MrFentazis on 06.10.2022.
//

#pragma once
#ifndef PIVOVAROV_A_V_QUEUEP_HPP
#define PIVOVAROV_A_V_QUEUEP_HPP

#include <iosfwd>
#include <string>
#include <stdexcept>
#include <vector>
#include "memory"

class QueueP {
private:
    class Node {
    private:
        int data = 0;
        std::unique_ptr<Node> next = nullptr;

    public:
        Node(int data, std::unique_ptr<Node> next);
        ~Node() = default;
        friend class QueueP;
    };

    std::unique_ptr<Node> head = nullptr;
    int len = 0;

public:
    class QueueOutOfRangeException : public std::runtime_error {
    public:
        QueueOutOfRangeException(std::string message="error: queue out of range") :
                std::runtime_error(message) {}
    };

    QueueP();
    QueueP(QueueP&) = delete;
    QueueP(QueueP&&) = default;
    QueueP(const std::vector<int>& v);
    QueueP(const int* mas, const int len);

    void push(const int& data);
    void pop();

    bool isEmpty() const;
    const int& top() const ;
    int getLength() const {return len;}

    QueueP& operator=(QueueP&& other) = default;
    QueueP& operator=(const QueueP&) = delete;
    ~QueueP();
};

#endif //PIVOVAROV_A_V_QUEUEP_HPP
