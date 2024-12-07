#pragma once

#ifndef CHARCUSTOMIZATION.H
#define CHARCUSTOMIZATION.H
#include <iostream>
#include <vector>
#include <list>
#include "Student.h"

using namespace std;

class CharCustomization : Student
{
    void printStats();
    void printMajor(Student);
    void printYear(Student);
    void printPersonality(Student);
    void printGender(Student);
    void printGPA(Student);
    void printHealth(Student);
    void printSanity(Student);
    void printName(Student);
};

#endif