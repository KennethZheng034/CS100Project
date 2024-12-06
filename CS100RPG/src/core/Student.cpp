#include "Student.h"
#include <iostream>
using namespace std;

// constructor
Student::Student()
{
    string studentMajor = "";
    string studentName = "";
    double studentGPA = 0.0;
    int studentHealth = 100;
    int studentSanity = 100;
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

void Student::setHealth(int health){
    this->studentHealth = health;
}

void Student::setSanity(int sanity){
    this->studentSanity = sanity; 
}

void Student::setName(const string &name){
    this->studentName = name;
}

void Student::setGPA(double GPA)
{
    this->studentGPA = GPA;
}

void Student::setMajor(const string &Major)
{
    this->studentMajor = Major;
}

string Student::getMajor() {
   return studentMajor;  
}

string Student::getName() {
    return studentName;
}

double Student::getGPA() {
    return studentGPA;
}

int Student::getHealth() {
    return studentHealth;
}

int Student::getSanity() {
    return studentSanity;
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

void Student::decreaseSantiy(int amount)
{
    this->studentSanity -= amount;
}