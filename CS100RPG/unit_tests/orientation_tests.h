#ifndef __ORIENTATION_TESTS_H__
#define __ORIENTATION_TESTS_H__

#include "gtest/gtest.h"
#include "../src/events/Orientation.h"

TEST(ORIENTATION, isHousingValidInvalidChoicePositive) {
    Orientation orientation;

    int choice = 100;
    int year = 1;

    bool result = orientation.isHousingValid(choice, year);

    EXPECT_EQ(result, false);
}

TEST(ORIENTATION, isHousingValidInvalidChoiceNegative) {
    Orientation orientation;

    int choice = -1;
    int year = 1;

    bool result = orientation.isHousingValid(choice, year);

    EXPECT_EQ(result, false);
}

TEST(ORIENTATION, isHousingValidApartment5) {
    Orientation orientation;

    int choice = 5;
    int year = 1;

    bool result = orientation.isHousingValid(choice, year);

    EXPECT_EQ(result, false);
}

TEST(ORIENTATION, isHousingValidApartment6) {
    Orientation orientation;

    int choice = 6;
    int year = 1;

    bool result = orientation.isHousingValid(choice, year);

    EXPECT_EQ(result, false);
}

TEST(ORIENTATION, isHousingValidDorm4) {
    Orientation orientation;

    int choice = 4;
    int year = 2;

    bool result = orientation.isHousingValid(choice, year);

    EXPECT_EQ(result, false);
}

TEST(ORIENTATION, isHousingValidDorm3) {
    Orientation orientation;

    int choice = 3;
    int year = 2;

    bool result = orientation.isHousingValid(choice, year);

    EXPECT_EQ(result, false);
}

TEST(ORIENTATION, isHousingValidDorm2) {
    Orientation orientation;

    int choice = 2;
    int year = 2;

    bool result = orientation.isHousingValid(choice, year);

    EXPECT_EQ(result, false);
}

TEST(ORIENTATION, isHousingValidDorm1) {
    Orientation orientation;

    int choice = 1;
    int year = 2;

    bool result = orientation.isHousingValid(choice, year);

    EXPECT_EQ(result, false);
}

TEST(ORIENTATION, isHousingValid) {
    Orientation orientation;

    int choice = 1;
    int year = 1;

    bool result = orientation.isHousingValid(choice, year);

    EXPECT_EQ(result, true);
}
//.
#endif