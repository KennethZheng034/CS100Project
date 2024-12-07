#include <gtest/gtest.h>
#include "../src/core/Student.h"
#include "../src/academic/Course.h"


TEST(StudentTest, ConstructorAndAttributes) {
    Student jack;
    EXPECT_EQ(jack.getMajor(), "Computer Science");
    EXPECT_EQ(jack.getStudentName(), "TestStudent");
    EXPECT_DOUBLE_EQ(jack.getStudentGPA(), 3.0);
    EXPECT_EQ(jack.getStudentHealth(), 100);
    EXPECT_EQ(jack.getStudentSanity(), 0); // Assuming sanity is set to 100 in the parameterized constructor
}

TEST(StudentTest, SettersAndGetters) {
    Student Jake;
    Jake.setGPA(3.5);
    EXPECT_DOUBLE_EQ(Jake.getStudentGPA(), 3.5);
    Jake.setMajor("Mathematics");
    EXPECT_EQ(Jake.getMajor(), "Mathematics");
}

TEST(StudentTest, IncreaseAndDecreaseAttributes) {
    Student Jeff;
    Jeff.increaseGPA(0.1);
    EXPECT_DOUBLE_EQ(Jeff.getStudentGPA(), 3.1);
    Jeff.increaseSanity(10);
    EXPECT_EQ(Jeff.getStudentSanity(), 110);
    Jeff.increaseHealth(10);
    EXPECT_EQ(Jeff.getStudentHealth(), 110);
    
    Jeff.decreaseGPA(0.1);
    EXPECT_DOUBLE_EQ(Jeff.getStudentGPA(), 3.0);
    Jeff.decreaseSanity(10);
    EXPECT_EQ(Jeff.getStudentSanity(), 100);
    Jeff.decreaseHealth(10);
    EXPECT_EQ(Jeff.getStudentHealth(), 100);
}

TEST(StudentTest, CourseManagement) {
    Student Jerry;
    Course fakeCourse;
    Jerry.InsertToCurrentCourse(fakeCourse.getCourseID(), fakeCourse);
    EXPECT_EQ(Jerry.SizeForCurrentCourse(), 1);
    
    Jerry.InsertToCompleteCourse(fakeCourse.getCourseID(), fakeCourse);
    EXPECT_EQ(Jerry.SizeForCompletedCourse(), 1);
    
    EXPECT_TRUE(Jerry.checkMaxCredit(fakeCourse));
    
    EXPECT_TRUE(Jerry.meetsPrereq(fakeCourse));
    
    Jerry.RemoveCourse(fakeCourse.getCourseID());
    EXPECT_EQ(Jerry.SizeForCurrentCourse(), 0);
}