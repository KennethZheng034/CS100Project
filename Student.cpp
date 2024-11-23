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
int Student::fetchYear()
{
    return this->studentYear;
}
string Student::fetchGender()
{
    return this->studentGender;
}
double Student::fetchGPA()
{
    return this->studentGPA;
}
int Student::fetchHealth()
{
    return this->studentHealth;
}
int Student::fetchSanity()
{
    return this->studentSanity;
}
string Student::fetchPersonality()
{
    return this->studentPersonality;
}
string Student::fetchMajor()
{
    return this->studentMajor;
}