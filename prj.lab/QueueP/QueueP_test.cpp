//
// Created by MrFentazis on 06.10.2022.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include "QueueP.hpp"
#include <vector>
#include <algorithm>

TEST_CASE("QueueP::QueueP(vector<int>)") {
    std::vector<int> v = {2, 4, 4, 1, 1, 6};
    QueueP q(v);

    std::sort(v.begin(), v.end());

    int tmp=0;

    for(size_t i = 0; i<v.size(); ++i) {
        tmp = q.top();
        q.pop();
        REQUIRE(v[i] == tmp);
    }

}

TEST_CASE("QueueP::QueueP(int* mas, int len)") {
    int mas[] = {1, 1, 2, 4, 4, 6};
    QueueP q(mas, 6);

    int tmp = 0;

    for(size_t i = 0; i<6; ++i) {
        tmp = q.top();
        q.pop();
        REQUIRE(mas[i] == tmp);
    }

}

TEST_CASE("QueueP::push()") {
    std::vector<int> v(0);
    QueueP q = QueueP();

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


TEST_CASE("QueueP::pop() Check trows") {
    QueueP q = QueueP();

    // from doctest doc
    CHECK_THROWS_AS(q.top(), const QueueP::QueueOutOfRangeException&);
    CHECK_THROWS_AS(q.top(), QueueP::QueueOutOfRangeException); // same as above
}