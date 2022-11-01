//
// Created by mrfentazis on 28.09.22.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include "QueueR.hpp"
#include <vector>
#include <algorithm>

TEST_CASE("QueueR::QueueR(vector<int>)") {
    std::vector<int> v = {2, 4, 1, 6};
    QueueR q(v);

    std::sort(v.begin(), v.end());

    int tmp = 0;

    for(size_t i = 0; i<v.size(); ++i) {
        tmp = q.top();
        q.pop();
        REQUIRE(v[i] == tmp);
    }

}

TEST_CASE("QueueR::QueueR(int* mas, int len)") {
    int mas[] = {1, 1, 2, 4, 4, 6};
    QueueR q(mas, 6);

    int tmp = 0;

    for(size_t i = 0; i<6; ++i) {
        tmp = q.top();
        q.pop();
        REQUIRE(mas[i] == tmp);
    }

}

TEST_CASE("QueueR::push()") {
    std::vector<int> v(0);
    QueueR q = QueueR();

    for(int i = 10; i>0; --i) {
        v.push_back(i);
        q.push(i);
    }

    std::sort(v.begin(), v.end());

    int tmp = 0;

    for(size_t i = 0; i<v.size(); ++i) {
        tmp = q.top();
        q.pop();
        REQUIRE(v[i] == tmp);
    }

    srand(time(NULL));
    v.clear();

    for(size_t i = 0; i<10; ++i) {
        int rnd = rand() % 100;
        v.push_back(rnd);
        q.push(rnd);
    }

    std::sort(v.begin(), v.end());

    for(size_t i = 0; i<v.size(); ++i) {
        tmp = q.top();
        q.pop();
        REQUIRE(v[i] == tmp);
    }
}

TEST_CASE("QueueR::pop() Check out of range trows") {
    QueueR q = QueueR();

    // from doctest doc
    CHECK_THROWS_AS(q.top(), const QueueR::QueueOutOfRangeException&);
    CHECK_THROWS_AS(q.top(), QueueR::QueueOutOfRangeException); // same as above
}