cmake_minimum_required(VERSION 3.14)
project(ShoppingCartTests)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include Google Test via FetchContent
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Add your test executable
add_executable(
  ShoppingCartTests
  shopping_cart_tests.cpp
)

# Link your test executable with GoogleTest
target_link_libraries(
  ShoppingCartTests
  gtest_main
)

# Add a test using GoogleTest
add_test(
  NAME ShoppingCartTests
  COMMAND ShoppingCartTests
)
