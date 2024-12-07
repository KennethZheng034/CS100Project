#pragma once

#include <iostream>
#include <vector>
#include <map>
#include "../academic/Course.h"

class Student
{
private:
    std::string studentMajor;
    std::string studentName;
    double studentGPA;
    int studentHealth;
    int studentSanity;
    std::string studentCreditCompleted;
    std::map<std::string, Course> currentCourse;
    std::map<std::string, Course> completedCourse;

public:
    Student();
    ~Student();
    Student(const std::string &, const std::string &, double, int, int);

    // getter
    std::string getMajor() const;
    std::string getStudentName() const;
    double getStudentGPA() const;
    int getStudentHealth() const;
    int getStudentSanity() const;
    std::string getStudentCredits() const;
    void InsertToCurrentCourse(const std::string& courseID, const Course&);
    void RemoveCourse(const std::string& courseID);
    void InsertToCompleteCourse(const std::string& courseID, const Course&);
    const int SizeForCurrentCourse();
    const int SizeForCompletedCourse();
    bool checkMaxCredit(const Course&) const;
    bool meetsPrereq(const Course&) const;

    // Course Management

    // Grade and Credit Updates
    // void updateGrade(const std::string &courseID, double grade);
    void increaseGPA(double amount);
    void decreaseGPA(double amount);
    void setGPA(double gpa);

    // Health and Sanity Updates
    void increaseHealth(int amount);
    void decreaseHealth(int amount);
    void increaseSanity(int amount);
    void decreaseSanity(int amount);

    // Major Update
    void setMajor(const std::string &major);
};
