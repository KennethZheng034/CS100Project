#include "Display.h"
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
    cout << "Please enter the number of your choice: " << endl;
    cout << endl; 
}

void Display::characterCustomization() {
    cout << "------------------------------------------------" << endl;
    cout << "[**Character Customization**]" << endl;
    cout << "------------------------------------------------" << endl;
    cout << endl;
    cout << "What is your name?" << endl;

    string username; 
    cin >> username; 
    cout << endl;

    cout << "What is your major?" << endl;

    string userMajor;
    cin >> userMajor;
    cout << endl;

    cout << "What is your GPA?" << endl;

    double userGPA;
    cin >> userGPA; 
    cout << endl;
}