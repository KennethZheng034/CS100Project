#include "Course.h"
#include <iostream>

int main() {
    string fileName = "../../data/Life@UCRCourseDatabase.txt";
    vector<Course> courseList = Course::loadCoursesFromFile(fileName);

    for (const auto& course : courseList) {
        cout << course.getCourseInfo() << "\n\n";
    }

    return 0;
}