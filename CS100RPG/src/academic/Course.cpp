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

    string id, title, type, instructor, ta;
    int credits;

    while(getline(file, id)){
        if(id.empty()) continue;

        getline(file, title);

        string creditsLine;
        getline(file, creditsLine);
        credits = stoi(creditsLine);

        getline(file, type);

        size_t start = type.find_first_not_of(" \t\n\r");
        size_t end = type.find_last_not_of(" \t\n\r");
        if(start != string::npos && end != string::npos){type = type.substr(start, end - start + 1);}
        
        for(char& c : type){c = std::tolower(c);}

        bool hasLab = (type == "lab");
        bool hasDiscussion = (type == "discussion");

        getline(file, instructor);
        getline(file, ta);
        string line;
        bool breadth = false;
        if(getline(file, line)){
        line.erase(line.find_last_not_of(" \t\n\r") + 1);
        if (line == "Breadth"){breadth = true;}

        Course course(id, title, {}, hasLab, hasDiscussion, breadth, credits, instructor, ta);
        courseList.push_back(course);
        }
    }
    file.close();
    return courseList; 
}