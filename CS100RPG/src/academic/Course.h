#pragma once
#include <string>
#include <vector>

class Course {
private:
    std::string courseID;         // Course ID
    std::string courseName;       // Course Name
    std::string courseCredits;     // Course Credits
    std::string courseDescription; // Course Description
    std::string courseDepartment; // Course Department
    std::string courseTA;         // Course Teaching Assistant
    std::string courseLocation;   // Course Location
    std::string courseInstructor; // Course Instructor
    std::string courseDiscussion; // Course Discussion (if applicable)
    std::string courseLab;        // Course Lab (if applicable)
    std::vector<std::string> coursePrerequisites; // Course Prerequisites

public:
    // Default Constructor
    Course()
        : courseID(""), courseName(""), courseCredits(""), 
          courseDescription(""), courseDepartment(""), courseTA(""), 
          courseLocation(""), courseInstructor(""), courseDiscussion(""), 
          courseLab(""), coursePrerequisites({}) {}

    // Parameterized Constructor
    Course(
        const std::string& id, const std::string& name, const std::string& credits,
        const std::string& description, const std::string& department,
        const std::string& ta, const std::string& location,
        const std::string& instructor, const std::string& discussion,
        const std::string& lab, const std::vector<std::string>& prerequisites
    ) : courseID(id), courseName(name), courseCredits(credits),
        courseDescription(description), courseDepartment(department),
        courseTA(ta), courseLocation(location), courseInstructor(instructor),
        courseDiscussion(discussion), courseLab(lab),
        coursePrerequisites(prerequisites) {}

    // Getters
    std::string getCourseID() const { return courseID; }
    std::string getCourseName() const { return courseName; }
    std::string getCourseCredits() const { return courseCredits; }
    std::string getCourseDescription() const { return courseDescription; }
    std::string getCourseDepartment() const { return courseDepartment; }
    std::string getCourseTA() const { return courseTA; }
    std::string getCourseLocation() const { return courseLocation; }
    std::string getCourseInstructor() const { return courseInstructor; }
    std::string getCourseDiscussion() const { return courseDiscussion; }
    std::string getCourseLab() const { return courseLab; }
    std::vector<std::string> getCoursePrereqs() const { return coursePrerequisites; }

    // Setters (if needed)
    // void setCourseID(const std::string& id) { courseID = id; }
    // void setCourseName(const std::string& name) { courseName = name; }
    // void setCourseCredits(int credits) { courseCredits = credits; }
    // void setCourseDescription(const std::string& description) { courseDescription = description; }
    // void setCourseDepartment(const std::string& department) { courseDepartment = department; }
    // void setCourseTA(const std::string& ta) { courseTA = ta; }
    // void setCourseLocation(const std::string& location) { courseLocation = location; }
    // void setCourseInstructor(const std::string& instructor) { courseInstructor = instructor; }
    // void setCourseDiscussion(const std::string& discussion) { courseDiscussion = discussion; }
    // void setCourseLab(const std::string& lab) { courseLab = lab; }
    // void setCoursePrerequisites(const std::vector<std::string>& prerequisites) { coursePrerequisites = prerequisites; }
};
