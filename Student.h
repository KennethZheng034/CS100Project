#pragma once

#include "CharCustomization.cpp"
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
        list<string> studentSchedule;

    public:
        Student();
        ~Student();
        Student(const string &, const string &, double, int, int);
        const string &fetchProgress();
        const string &fetchYear();
        string fetchGender();
        double fetchGPA();
        int fetchHealth();
        int fetchSanity();
        void fetchPersonality(string);
        const string&fetchMajor();
        void increaseGPA(double);
        void increaseHealth(int);
        void increaseSanity(int);
        void decreaseHealth(int);
        void decreaseGPA(double);
        void decreaseSanity(int);
        void setMajor(const string &);
        void setGPA(double);
        void setGender(string);
        void setPersonality(string);
        void setYear(int);
};
