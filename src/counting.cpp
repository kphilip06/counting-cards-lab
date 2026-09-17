#include <iostream>
#include <random>

#include "counting.hpp"

int* Sort::firstAlgorithm(const int passed[], size_t size) {
    const auto shuffled = new int[size];
    const auto is_picked = new bool[size]();
    size_t n = size;
    size_t write_index = 0;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<size_t> distr(0, size - 1);

    while (n > 0) {
        size_t i = distr(gen);
        if (is_picked[i] == false) {
            shuffled[write_index] = passed[i];
            is_picked[i] = true;
            write_index++;
            n--;
        }
    }
    delete[] is_picked;

    return shuffled;
}

int* Sort::secondAlgorithm(int passed[], size_t size) {
    const auto shuffled = new int[size];
    size_t n = size;
    size_t write_index = 0;

    std::random_device rd;
    std::mt19937 gen(rd());

    while (n > 0) {
        std::uniform_int_distribution<size_t> distr(0, n - 1);
        size_t i = distr(gen);

        shuffled[write_index] = passed[i];
        write_index++;

        passed[i] = passed[n-1];
        n--;
    }
    return shuffled;
}

void Sort::thirdAlgorithm(int passed[], size_t size) {
    size_t n = size;
    size_t write_index = 0;

    std::random_device rd;
    std::mt19937 gen(rd());

    while (n > 1) {
        std::uniform_int_distribution<size_t> distr(0, n - 1);
        size_t i = distr(gen);

        n--;
        std::swap(passed[i], passed[n]);
    }
}
