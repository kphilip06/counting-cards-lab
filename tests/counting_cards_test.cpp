#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/counting.hpp"

TEST_CASE("Benchmarking Algorithm 1") {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {10, 12, 16, 20};
    int arr3[5] = {100, 2000, 38, 2102, 12};
    int arr4[5] = {10, 92, 3, 2, 1};

    BENCHMARK("Algorithm 1 - Array 1") {
        return Sort::firstAlgorithm(arr1, 5);
    };

    BENCHMARK("Algorithm 1 - Array 2") {
        return Sort::firstAlgorithm(arr2, 5);
    };

    BENCHMARK("Algorithm 1 - Array 3") {
        return Sort::firstAlgorithm(arr3, 5);
    };

    BENCHMARK("Algorithm 1 - Array 4") {
        return Sort::firstAlgorithm(arr4, 5);
    };
}

TEST_CASE("Benchmarking Algorithm 2") {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {10, 12, 16, 20};
    int arr3[5] = {100, 2000, 38, 2102, 12};
    int arr4[5] = {10, 92, 3, 2, 1};

    BENCHMARK("Algorithm 2 - Array 1") {
        return Sort::secondAlgorithm(arr1, 5);
    };

    BENCHMARK("Algorithm 2 - Array 2") {
        return Sort::secondAlgorithm(arr2, 5);
    };

    BENCHMARK("Algorithm 2 - Array 3") {
        return Sort::secondAlgorithm(arr3, 5);
    };

    BENCHMARK("Algorithm 2 - Array 4") {
        return Sort::secondAlgorithm(arr4, 5);
    };
}

TEST_CASE("Benchmarking Algorithm 3") {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {10, 12, 16, 20};
    int arr3[5] = {100, 2000, 38, 2102, 12};
    int arr4[5] = {10, 92, 3, 2, 1};

    BENCHMARK("Algorithm 3 - Array 1") {
        return Sort::thirdAlgorithm(arr1, 5);
    };

    BENCHMARK("Algorithm 3 - Array 2") {
        return Sort::thirdAlgorithm(arr2, 5);
    };

    BENCHMARK("Algorithm 3 - Array 3") {
        return Sort::thirdAlgorithm(arr3, 5);
    };

    BENCHMARK("Algorithm 3 - Array 4") {
        return Sort::thirdAlgorithm(arr4, 5);
    };
}
