#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Student
{
protected:
    string studentMajor;
    string studentName;
    double studentGPA;
    int studentHealth;
    int studentSanity;
    string studentGender;
    vector<string> studentSchedule;
    string studentPersonality;

public:
    Student();
    ~Student();
    Student(const string &, const string &, double, int, int);
    const string &fetchProgress();
    const string &fetchYear();
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
    string fetchPersonality(string);
};
