//
// Created by MrFentazis on 11.10.2022.
//

#include "iostream"
#include <vector>
#include "QueueP/QueueP.hpp"
#include "algorithm"

int main() {
    std::vector<int> v = {2, 4, 4, 1, 1, 6};
    QueueP q(v);

    std::sort(v.begin(), v.end());

    for(size_t i = 0; i<v.size(); ++i) {
        std::cout << q.top() << std::endl;
        q.pop();
    }

    //std::sort(v.begin(), v.end());

    //for(size_t i = 0; i<v.size(); ++i)
    //    std::cout << q.pop() << std::endl;

    return 0;
}