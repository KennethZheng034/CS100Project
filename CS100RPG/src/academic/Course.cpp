#include "Course.h"

Course::Course(string id, const string& title, const vector<string>& prereqs, bool lab, bool discussion,
               bool breadth, int credits, const string& instructor, const string& ta)
    : courseID(id), courseTitle(title), prereqList(prereqs), hasLab(lab),
      hasDiscussion(discussion), isBreadth(breadth), courseCredits(credits), 
      courseInstructor(instructor), courseTA(ta){}

Course::~Course(){}

string Course::getCourseInfo() const{
    return "Course ID: " + courseID + "\nTitle: " + courseTitle + "\nCredits: " + to_string(courseCredits) +
           "\nLab: " + (hasLab ? "Yes" : "No") + "\nDiscussion: " + (hasDiscussion ? "Yes" : "No") +
           "\nBreadth: " + (isBreadth ? "Yes" : "No") + "\nInstructor: " + courseInstructor +
           "\nTA: " + courseTA;
}

vector<Course> Course::loadCoursesFromFile(const string& fileName){
    vector<Course> courseList;
    ifstream file(fileName);

    if (!file.is_open()){
        cout << "Error opening file: " << fileName << endl;
        return courseList;
    }

    string line;
    while (getline(file, line)){

        string id = line;

        string title;
        getline(file, title);

        int credits = 0;
        file >> credits;

        string type;
        getline(file, type);

        bool hasLab = (type == "Lab");
        bool hasDiscussion = (type == "Discussion");

        string instructor;
        getline(file, instructor);

        string ta;
        getline(file, ta);

        Course course(id, title, {}, hasLab, hasDiscussion, false, credits, instructor, ta);
        courseList.push_back(course);
    }

    file.close();
    return courseList;
}
