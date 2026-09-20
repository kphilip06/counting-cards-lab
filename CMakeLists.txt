cmake_minimum_required(VERSION 3.24)

project(counting_cards)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(counting_cards_test tests/counting_cards_test.cpp src/counting.cpp)
add_executable(main main.cpp src/counting.cpp src/counting.hpp)

target_link_libraries(counting_cards_test PRIVATE Catch2::Catch2WithMain)
