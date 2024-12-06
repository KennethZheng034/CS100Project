#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Student 
{
    protected:
        string studentMajor;
        string studentName;
        string studentPersonality;
        string studentGender;
        double studentGPA;
        int studentHealth;
        int studentSanity;
        int studentYear;
        vector<string> studentSchedule;
// protected:
//     string studentMajor = "";
//     string studentName = "";
//     double studentGPA = 0;
//     int studentHealth = 100;
//     int studentSanity = 100;
//     vector<string> studentSchedule;

    public:
        Student();
        ~Student();
        Student(const string &, const string &, double, int, int);
        const string &fetchProgress();
        string fetchName();
        string fetchGender();
        string fetchPersonality();
        string fetchMajor();
        double fetchGPA();
        int fetchHealth();
        int fetchSanity();
        int fetchYear();
        void increaseGPA(double);
        void increaseHealth(int);
        void increaseSanity(int);
        void decreaseHealth(int);
        void decreaseGPA(double);
        void decreaseSanity(int);
        void setHealth();
        void setSanity();
        void setName();
        void setGender();
        void setYear();
        void setMajor();
        void setGPA();
        void setPersonality();
        void updateMajor(string); 
        void updateDegreeAudit();
        void updateGPA(double);
        void updateHealth(int);
        void updateSanity(int); 
        void registerClass(string); 
        void dropClass(string);
};

#endif