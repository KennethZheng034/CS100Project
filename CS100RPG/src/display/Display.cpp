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

    cout << "What is your name? ";

    string username; 
    getline(cin, username); 
    student.setName(username);

    cout << "What is your major? ";

    string userMajor;
    getline(cin, userMajor);
    student.setMajor(userMajor);

    cout << "What is your GPA? ";

    double userGPA;
    cin >> userGPA; 
    student.setGPA(userGPA);
    cout << endl;

    student.setHealth(100);
    student.setSanity(100);

    cout << "------------------------------------------------" << endl;
    cout << "[**" + student.getName() + "'s Info**]" << endl;
    cout << "------------------------------------------------" << endl;

    cout << "Major: " + student.getMajor() << endl;
    cout << "GPA: " << student.getGPA() << endl; 
    cout << "Health: " << student.getHealth() << endl; 
    cout << "Sanity: " << student.getSanity() << endl; 
    cout << endl;
}