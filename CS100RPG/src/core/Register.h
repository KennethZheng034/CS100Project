#pragma once
#include <string>
#include <map>
#include <vector>
#include "../academic/Course.h"
#include "Student.h"

class Registration
{
private:
    std::map<std::string, Course> UCRCourse;
    void loadCoursesFromFile(const std::string &fileName);

public:
    Registration();
    void addCurrentCourse(Student&, const std::string &courseID);
    void addToCompleteCourse(Student &, const std::string &courseID);

    void removeCourse(Student&, const std::string &courseID);
    std::map<std::string, Course> getUCRCourse() const;
};