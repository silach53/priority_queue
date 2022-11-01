//
// Created by MrFentazis on 06.10.2022.
//
#include "iostream"
#include <vector>
#include "QueueR/QueueR.hpp"
#include "algorithm"

int main() {
    std::vector<int> v(0);
    QueueR q = QueueR();

    for(int i = 10; i>0; --i) {
        v.push_back(i);
        q.push(i);
    }

    std::sort(v.begin(), v.end());

    for(size_t i = 0; i<v.size(); ++i) {
        std::cout << q.top() << std::endl;
        q.pop();
    }

    return 0;
}
