#pragma once

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

    public:
        Student();
        ~Student();
        Student(const string &, const string &, double, int, int);
        const string &fetchProgress();
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
        void setGender(Student currStudent);
        void setYear(Student currStudent);
        void setMajor(Student currStudent);
        void setGPA(Student currStudent);
        void setPersonality(Student currStudent);
        void printStats();
        void printMajor();
        void printYear();
        void printPersonality();
        void printGender();
        void printGPA();
        void printHealth();
        void printSanity();
        void printName();
};
