#include <iostream>
#include "Register.h" // Assuming this includes "Student.h"
#include "../academic/Course.h"   // Assuming Course class is defined here

int main() {
    try {
        // Create Registration and load courses
        Registration reg;
        
        // Create a student
        Student student("Computer Science", "Jamfn", 3.5, 100, 100);
        
        // Test adding a course to current courses
        std::string courseIDToAdd = "CS010A";
        reg.addCurrentCourse(student, courseIDToAdd);
        std::cout << "Added " << courseIDToAdd << " to current courses. Current course size: " 
                  << student.SizeForCurrentCourse() << std::endl;

        // Check if we can add another course (assuming CS101 has 4 credits and the limit is 20)
        courseIDToAdd = "MATH09A";
        try {
            reg.addCurrentCourse(student, courseIDToAdd);
            std::cout << "Added " << courseIDToAdd << " to current courses. Current course size: " 
                      << student.SizeForCurrentCourse() << std::endl;
        } catch (const std::runtime_error& e) {
            std::cout << "Failed to add course: " << e.what() << std::endl;
        }

        // Try to add a course to completed courses
        courseIDToAdd = "ENGL001A";
        reg.addToCompleteCourse(student, courseIDToAdd);
        std::cout << "Added " << courseIDToAdd << " to completed courses. Completed course size: " 
                  << student.SizeForCompletedCourse() << std::endl;

        // Test removing a course
        std::string courseIDToRemove = "CS010A";
        reg.removeCourse(student, courseIDToRemove);
        std::cout << "Removed " << courseIDToRemove << ". Current course size: " 
                  << student.SizeForCurrentCourse() << std::endl;

        // Try removing a non-existent course
        try {
            reg.removeCourse(student, "CS104");
        } catch (const std::runtime_error& e) {
            std::cout << "Error removing course: " << e.what() << std::endl;
        }

        // Print student details for verification
        std::cout << "Student Name: " << student.getStudentName() 
                  << ", Major: " << student.getMajor() 
                  << ", GPA: " << student.getStudentGPA() 
                  << ", Health: " << student.getStudentHealth() 
                  << ", Sanity: " << student.getStudentSanity() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}