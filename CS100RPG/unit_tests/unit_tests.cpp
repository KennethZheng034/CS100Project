#include "gtest/gtest.h"
#include "./student_tests.h"
#include "./orientation_tests.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}