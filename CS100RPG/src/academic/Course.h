#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <cctype>

using namespace std;

class Course {
private:
    string courseID;
    string courseTitle;
    vector<string> prereqList;
    bool hasLab;
    bool hasDiscussion;
    bool isBreadth;
    int courseCredits;
    string courseInstructor;
    string courseTA;

public:
    Course(string id, const string& title, const vector<string>& prereqs, bool lab, bool discussion,
           bool breadth, int credits, const string& instructor, const string& ta);
    ~Course();
    string getCourseInfo() const;
    static vector<Course> loadCoursesFromFile(const string& fileName);
};
