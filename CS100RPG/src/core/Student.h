#ifndef STUDENT_H
#define STUDENT_H

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
    void setSanity(int);
    void setHealth(int);
    void increaseGPA(double);
    void increaseHealth(int);
    void increaseSanity(int);
    void decreaseHealth(int);
    void decreaseGPA(double);
    void decreaseSantiy(int);
    void setName(const string &);
    void setMajor(const string &);
    void setGPA(double);
    string getMajor();
    string getName();
    double getGPA();
    int getHealth();
    int getSanity();
};

#endif