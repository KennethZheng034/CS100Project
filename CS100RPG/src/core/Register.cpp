#include "Register.h"
#include "Student.h"
#include <string>
#include <map>
#include <vector>
#include <stdexcept>  // for std::runtime_error
#include <iostream>   // for std::cerr
#include <fstream>
#include <sstream>


Registration::Registration() {
    loadCoursesFromFile("../data/CourseRegisterData.txt");
}

std::map<std::string, Course> Registration::getUCRCourse() const{
    return UCRCourse;
}

void Registration::loadCoursesFromFile(const std::string &fileName){
    UCRCourse.clear();
    std::ifstream infile(fileName);
    if (!infile.is_open()) {
        throw std::runtime_error("Could not open file: " + fileName);
    }

    std::string line;
    while (std::getline(infile, line)) {
        std::istringstream sstream(line);
        std::string courseIDs, courseCredits, coursePrereqsString, courseName, courseDescription, courseDepartment, courseTA, courseLocation, courseInstructor, courseDiscussion, courseLab;

        // Parse the line fields using commas as delimiters
        std::getline(sstream, courseIDs, ',');
        std::getline(sstream, courseName, ',');
        std::getline(sstream, courseCredits, ',');
        std::getline(sstream, courseDescription, ',');
        std::getline(sstream, courseDepartment, ',');
        std::getline(sstream, courseTA, ',');
        std::getline(sstream, courseLocation, ',');
        std::getline(sstream, courseInstructor, ',');
        std::getline(sstream, courseDiscussion, ',');
        std::getline(sstream, courseLab, ',');
        std::getline(sstream, coursePrereqsString); // Read the rest for prerequisites

        // Handle prerequisites
        std::vector<std::string> coursePrereqs;
        if (!coursePrereqsString.empty()) { // Check if there are any prerequisites
            std::istringstream prereqStream(coursePrereqsString);
            std::string prereq;
            while (std::getline(prereqStream, prereq, ',')) {
                if (!prereq.empty()) {
                    coursePrereqs.push_back(prereq);
                }
            }
        }

        // Create Course object and insert into map
        Course course(courseIDs, courseName, courseCredits, courseDescription, 
                    courseDepartment, courseTA, courseLocation, courseInstructor, 
                    courseDiscussion, courseLab, coursePrereqs);

        UCRCourse[courseIDs] = course;
    }

    infile.close();
}



void Registration::addCurrentCourse(Student &student, const std::string &courseID) {
    // Retrieve course from course map
    Course targetCourse = UCRCourse.at(courseID);

    // Check prerequisites
    if (!student.meetsPrereq(targetCourse)) {
        throw std::runtime_error("Prerequisites not met for course: " + courseID);
    }

    // Check credit limit
    if (student.checkMaxCredit(targetCourse)) {
        throw std::runtime_error("Credit limit exceeded");
    }

    student.InsertToCurrentCourse(courseID, targetCourse);
}

void Registration::addToCompleteCourse(Student &student, const std::string &courseID) {
    // Retrieve course from course map
    Course targetCourse = UCRCourse.at(courseID);

    // Check prerequisites
    if (!student.meetsPrereq(targetCourse)) {
        throw std::runtime_error("Prerequisites not met for course: " + courseID);
    }

    // Check credit limit
    if (student.checkMaxCredit(targetCourse)) {
        throw std::runtime_error("Credit limit exceeded");
    }

    student.InsertToCompleteCourse(courseID, targetCourse);
}

void Registration::removeCourse(Student &student, const std::string &courseID) {
    if(student.SizeForCurrentCourse() >= 1){
            student.RemoveCourse(courseID);
    }
    else{
       throw std::runtime_error("not course to remove");
    } 
}