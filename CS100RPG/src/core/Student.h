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
    vector<string> studentSchedule;

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
    void decreaseSantiy(int);
    void setMajor(const string &);
    void setGPA(double);
};
