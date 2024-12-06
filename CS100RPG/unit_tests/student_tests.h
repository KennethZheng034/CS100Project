#ifndef __STUDENT_TESTS_H__
#define __STUDENT_TESTS_H__

#include "gtest/gtest.h"
#include "../src/core/Student.h"

TEST(STUDENT, DefaultConstructor) {
    Student student;

    EXPECT_EQ(student.getMajor(), "");
    EXPECT_EQ(student.getName(), "");
    EXPECT_EQ(student.getGPA(), 0.0);
    EXPECT_EQ(student.getHealth(), 100);
    EXPECT_EQ(student.getSanity(), 100);
}

TEST(STUDENT, ParamerterizedConstructor) {
    Student student("Computer Science", "John Smith", 4.0, 50, 50);

    EXPECT_EQ(student.getMajor(), "Computer Science");
    EXPECT_EQ(student.getName(), "John Smith");
    EXPECT_EQ(student.getGPA(), 4.0);
    EXPECT_EQ(student.getHealth(), 50);
    EXPECT_EQ(student.getSanity(), 50);
}

TEST(STUDENT, setMajor) {
    Student student("Computer Science", "John Smith", 4.0, 50, 50);
    student.setMajor("Computer Engineering");

    EXPECT_EQ(student.getMajor(), "Computer Engineering");
    EXPECT_EQ(student.getName(), "John Smith");
    EXPECT_EQ(student.getGPA(), 4.0);
    EXPECT_EQ(student.getHealth(), 50);
    EXPECT_EQ(student.getSanity(), 50);
}

TEST(STUDENT, setName) {
    Student student("Computer Science", "John Smith", 4.0, 50, 50);
    student.setName("Ada Lovelace");

    EXPECT_EQ(student.getMajor(), "Computer Science");
    EXPECT_EQ(student.getName(), "Ada Lovelace");
    EXPECT_EQ(student.getGPA(), 4.0);
    EXPECT_EQ(student.getHealth(), 50);
    EXPECT_EQ(student.getSanity(), 50);
}

TEST(STUDENT, setGPA) {
    Student student("Computer Science", "John Smith", 4.0, 50, 50);
    student.setGPA(3.5);

    EXPECT_EQ(student.getMajor(), "Computer Science");
    EXPECT_EQ(student.getName(), "John Smith");
    EXPECT_EQ(student.getGPA(), 3.5);
    EXPECT_EQ(student.getHealth(), 50);
    EXPECT_EQ(student.getSanity(), 50);
}

TEST(STUDENT, setHealth) {
    Student student("Computer Science", "John Smith", 4.0, 50, 50);
    student.setHealth(75);

    EXPECT_EQ(student.getMajor(), "Computer Science");
    EXPECT_EQ(student.getName(), "John Smith");
    EXPECT_EQ(student.getGPA(), 4.0);
    EXPECT_EQ(student.getHealth(), 75);
    EXPECT_EQ(student.getSanity(), 50);
}

TEST(STUDENT, setSanity) {
    Student student("Computer Science", "John Smith", 4.0, 50, 50);
    student.setSanity(75);

    EXPECT_EQ(student.getMajor(), "Computer Science");
    EXPECT_EQ(student.getName(), "John Smith");
    EXPECT_EQ(student.getGPA(), 4.0);
    EXPECT_EQ(student.getHealth(), 50);
    EXPECT_EQ(student.getSanity(), 75);
}

TEST(STUDENT, increaseGPA) {
    Student student("Computer Science", "John Smith", 4.0, 50, 50);
    student.increaseGPA(-0.5);

    EXPECT_EQ(student.getMajor(), "Computer Science");
    EXPECT_EQ(student.getName(), "John Smith");
    EXPECT_EQ(student.getGPA(), 3.5);
    EXPECT_EQ(student.getHealth(), 50);
    EXPECT_EQ(student.getSanity(), 50);
}

TEST(STUDENT, increaseHealth) {
    Student student("Computer Science", "John Smith", 4.0, 50, 50);
    student.increaseHealth(-25);

    EXPECT_EQ(student.getMajor(), "Computer Science");
    EXPECT_EQ(student.getName(), "John Smith");
    EXPECT_EQ(student.getGPA(), 4.0);
    EXPECT_EQ(student.getHealth(), 25);
    EXPECT_EQ(student.getSanity(), 50);
}

TEST(STUDENT, increaseSanity) {
    Student student("Computer Science", "John Smith", 4.0, 50, 50);
    student.increaseSanity(-25);

    EXPECT_EQ(student.getMajor(), "Computer Science");
    EXPECT_EQ(student.getName(), "John Smith");
    EXPECT_EQ(student.getGPA(), 4.0);
    EXPECT_EQ(student.getHealth(), 50);
    EXPECT_EQ(student.getSanity(), 25);
}

#endif