#include "Student.h"
#include <iostream>
using namespace std;

// constructor
Student::Student()
{
    string studentMajor = "";
    string studentName = "";
    double studentGPA = 0;
    int studentHealth = 100;
    int studentSanity = 0;
    string studentName;
    vector<string> studentSchedule;
    string studentPersonality;
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

const string &fetchProgress()
{
  return "yes";
}
const string &fetchYear()
{
  return;
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
void Student::setMajor(const string& MajorInput)
{
    this->studentMajor = MajorInput;
}

void Student::setGPA(double GPAInput)
{
    this->studentGPA = GPAInput;
}

void Student::setGender(string GenderInput)
{
    this->studentGender = GenderInput;
}

void Student::setPersonality(string PersonalityInput)
{
    this->studentPersonality = PersonalityInput;
}

string Student::fetchPersonality(string)
{
   return this->studentPersonality;
}