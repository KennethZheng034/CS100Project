#include "../src/core/Register.h"
#include "../src/core/Student.h"
#include "gtest/gtest.h"

#include <string>
#include <map>
#include <vector>

TEST(RegistrationTest, AddCurrentCourse_NoThrow) {
    // Arrange
    Registration reg;
    Student Jake;

    // Act & Assert
    EXPECT_NO_THROW(reg.addCurrentCourse(Jake, "CS010A"));
}

TEST(RegistrationTest, AddToCompleteCourse_NoThrow) {
    // Arrange
    Registration reg;
    Student student;

    // Act & Assert
    EXPECT_NO_THROW(reg.addToCompleteCourse(student, "CS010A"));
}

TEST(RegistrationTest, RemoveCourse_NoThrow) {
    // Arrange
    Registration reg;
    Student student;

    // Act & Assert
    EXPECT_NO_THROW(reg.removeCourse(student, "CS010A"));
}

TEST(RegistrationTest, GetUCRCourse_NoThrow) {
    // Arrange
    Registration reg;

    // Act & Assert
    EXPECT_NO_THROW(auto courseCatalog = reg.getUCRCourse());
}

// If you want to ensure that some operation does not throw an exception
// but also want to check for specific outcomes, you can combine 
// EXPECT_NO_THROW with EXPECT assertions.

TEST(RegistrationTest, AddCurrentCourse_WithCheck) {
    // Arrange
    Registration reg;
    Student Jake;

    // Act
    EXPECT_NO_THROW(reg.addCurrentCourse(Jake, "CS010A"));
}

TEST(RegistrationTest, AddToCompleteCourse_WithCheck) {
    // Arrange
    Registration reg;
    Student student;

    // Act
    EXPECT_NO_THROW(reg.addToCompleteCourse(student, "CS010A"));
}