#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <random>

#include "..\src\counting.hpp"

int* generateRandomArray(size_t size) {
    int* arr = new int[size];
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distr(0, 10000);

    for (size_t i = 0; i < size; ++i) {
        arr[i] = distr(gen);
    }
    return arr;
}

TEST_CASE("Benchmarking Algorithm 1") {
    // Differing array sizes to test performance scaling
    size_t size1 = 10;
    size_t size2 = 100;
    size_t size3 = 1000;
    size_t size4 = 10000;

    int* arr1 = generateRandomArray(size1);
    int* arr2 = generateRandomArray(size2);
    int* arr3 = generateRandomArray(size3);
    int* arr4 = generateRandomArray(size4);

    BENCHMARK("Algorithm 1 - Size 10") {
        int* res = Sort::firstAlgorithm(arr1, size1);
        delete[] res; // Clean up memory created inside firstAlgorithm
        return res;
    };

    BENCHMARK("Algorithm 1 - Size 100") {
        int* res = Sort::firstAlgorithm(arr2, size2);
        delete[] res;
        return res;
    };

    BENCHMARK("Algorithm 1 - Size 1000") {
        int* res = Sort::firstAlgorithm(arr3, size3);
        delete[] res;
        return res;
    };

    BENCHMARK("Algorithm 1 - Size 10000") {
        int* res = Sort::firstAlgorithm(arr4, size4);
        delete[] res;
        return res;
    };

    // Clean up our generated input arrays after benchmarks complete
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
}

TEST_CASE("Benchmarking Algorithm 2") {
    size_t size1 = 10;
    size_t size2 = 100;
    size_t size3 = 1000;
    size_t size4 = 10000;

    int* arr1 = generateRandomArray(size1);
    int* arr2 = generateRandomArray(size2);
    int* arr3 = generateRandomArray(size3);
    int* arr4 = generateRandomArray(size4);

    BENCHMARK("Algorithm 2 - Size 10") {
        int* res = Sort::secondAlgorithm(arr1, size1);
        delete[] res;
        return res;
    };

    BENCHMARK("Algorithm 2 - Size 100") {
        int* res = Sort::secondAlgorithm(arr2, size2);
        delete[] res;
        return res;
    };

    BENCHMARK("Algorithm 2 - Size 1000") {
        int* res = Sort::secondAlgorithm(arr3, size3);
        delete[] res;
        return res;
    };

    BENCHMARK("Algorithm 2 - Size 10000") {
        int* res = Sort::secondAlgorithm(arr4, size4);
        delete[] res;
        return res;
    };

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
}

TEST_CASE("Benchmarking Algorithm 3") {
    size_t size1 = 10;
    size_t size2 = 100;
    size_t size3 = 1000;
    size_t size4 = 10000;

    int* arr1 = generateRandomArray(size1);
    int* arr2 = generateRandomArray(size2);
    int* arr3 = generateRandomArray(size3);
    int* arr4 = generateRandomArray(size4);

    BENCHMARK("Algorithm 3 - Size 10") {
        Sort::thirdAlgorithm(arr1, size1);
    };

    BENCHMARK("Algorithm 3 - Size 100") {
        Sort::thirdAlgorithm(arr2, size2);
    };

    BENCHMARK("Algorithm 3 - Size 1000") {
        Sort::thirdAlgorithm(arr3, size3);
    };

    BENCHMARK("Algorithm 3 - Size 10000") {
        Sort::thirdAlgorithm(arr4, size4);
    };

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
}