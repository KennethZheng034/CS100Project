#include "Student.h"
#include <iostream>

// constructor
Student::Student()
{
    std::string studentMajor = "";
    std::string studentName = "";
    double studentGPA = 0;
    int studentHealth = 100;
    int studentSanity = 0;
}

Student::~Student()
{
}

// paramerterized constructor
Student::Student(const std::string &Major, const std::string &Name, double GPA, int Health, int studentSanity)
{
    this->studentMajor = Major;
    this->studentName = Name;
    this->studentGPA = GPA;
    this->studentHealth = Health;
    this->studentSanity = 0;
}

void Student::setGPA(double GPA)
{
    this->studentGPA = GPA;
}

void Student::setMajor(const std::string &Major)
{
    this->studentMajor = Major;
}

void Student::increaseGPA(double amount)
{
    this->studentGPA += amount;
}

void Student::increaseSanity(int amount)
{
    this->studentSanity += amount;
}

void Student::increaseHealth(int amount)
{
    this->studentHealth += amount;
}

void Student::decreaseHealth(int amount)
{
    this->studentHealth -= amount;
}

void Student::decreaseGPA(double amount)
{
    this->studentGPA -= amount;
}

void Student::decreaseSanity(int amount)
{
    this->studentSanity -= amount;
}

std::string Student::getMajor() const {
    return studentMajor;
}

std::string Student::getStudentName() const {
    return studentName;
}

double Student::getStudentGPA() const {
    return studentGPA;
}

// Getter for student's health
int Student::getStudentHealth() const {
    return studentHealth;
}

// Getter for student's sanity
int Student::getStudentSanity() const {
    return studentSanity;
}

// Getter for student's credits completed (Note: this returns a string, which might not be ideal for credit management)
std::string Student::getStudentCredits() const {
    return studentCreditCompleted;
}

void Student::InsertToCurrentCourse(const std::string& courseID, const Course& course) {
    currentCourse[courseID] = course;
}

void Student::RemoveCourse(const std::string& courseID) {
    // Use erase to remove the course
    auto it = currentCourse.find(courseID);
    if (it != currentCourse.end()) {
        currentCourse.erase(it);
    } else {
        // Course not found, handle this case (e.g., throw exception, log error)
        throw std::runtime_error("Course not found: " + courseID);
    }
}

void Student::InsertToCompleteCourse(const std::string& courseID, const Course& course) {
    completedCourse[courseID] = course;
}

const int Student::SizeForCurrentCourse() {
    return currentCourse.size();
}

const int Student::SizeForCompletedCourse() {
    return completedCourse.size();
}

bool Student::checkMaxCredit(const Course& targetCourse) const {
    int currentCredits = 0;
    
    for (const auto& course : currentCourse) {
        currentCredits += std::stoi(course.second.getCourseCredits());
    }
    // Here we check if adding this course would exceed the limit
    return currentCredits + std::stoi(targetCourse.getCourseCredits()) > 20;
}

bool Student::meetsPrereq(const Course& targetCourse) const {
    const std::vector<std::string>& prerequisites = targetCourse.getCoursePrereqs();
    
    for (const auto& prereq : prerequisites) {
        if (completedCourse.find(prereq) == completedCourse.end()) {
            return false;
        }
    }
    return true;
}