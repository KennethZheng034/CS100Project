#include "Display.h"
    
// void displayScreen()
// {

// }
// void displayProgress()
// {

// }
// void displayAchievements()
// {
    
// }
#include "Display.h"
#include "../core/Student.h"
#include <iostream>
#include <string>

using namespace std;

void Display::mainMenu() {
    cout << "------------------------------------------------" << endl;
    cout << "[Life@UCR]" << endl;
    cout << "------------------------------------------------" << endl; 
    cout << endl;
    cout << "Welcome to Life@UCR. What would you like to do?" << endl;
    cout << endl; 
    cout << "1. New Game" << endl;
    cout << "2. Continue" << endl;
    cout << endl;
    cout << "Please enter the number of your choice: ";
}

void Display::characterCustomization() {
    cout << "------------------------------------------------" << endl;
    cout << "[**Character Customization**]" << endl;
    cout << "------------------------------------------------" << endl;
    cout << endl;

    Student student = Student();
    cin.ignore();

    student.setName();
    student.setMajor();
    student.setGPA();
    cout << endl;
    student.setHealth();
    student.setSanity();

    cout << "------------------------------------------------" << endl;
    cout << "[**" + student.fetchName() + "'s Info**]" << endl;
    cout << "------------------------------------------------" << endl;

    cout << "Major: " + student.fetchMajor() << endl;
    cout << "GPA: " << student.fetchGPA() << endl; 
    cout << "Health: " << student.fetchHealth() << endl; 
    cout << "Sanity: " << student.fetchSanity() << endl; 
    cout << endl;
}