#include "Student.h"
#include <iostream>
using namespace std;

// constructor
Student::Student()
{
    this->studentMajor = "";
    this->studentGPA = 0.0;
    this->studentHealth = 100;
    this->studentSanity = 0;
    this->studentPersonality = "";
}

Student::~Student()
{
}

// paramerterized constructor
Student::Student(const string &Major, const string &Name, double GPA, int Health, int studentSanity)
{
    this->studentMajor = Major;
    this->studentName = Name;
    this->studentGPA = GPA;
    this->studentHealth = Health;
    this->studentSanity = 0;
}

void Student::setGPA(double GPA)
{
    this->studentGPA = GPA;
}

void Student::setMajor(const string &Major)
{
    this->studentMajor = Major;
}

void Student::increaseGPA(double amount)
{
    this->studentGPA += amount;
}

void Student::increaseSanity(int amount)
{
    this->studentSanity += amount;
}

void Student::increaseHealth(int amount)
{
    this->studentHealth += amount;
}

void Student::decreaseHealth(int amount)
{
    this->studentHealth -= amount;
}

void Student::decreaseGPA(double amount)
{
    this->studentGPA -= amount;
}

void Student::decreaseSanity(int amount)
{
    this->studentSanity -= amount;
}