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
    this->studentSchedule = {""};
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

void Student::setGender(Student currStudent)
{
  string GenderInput;
  cout << "Are you a male or female?" << endl;
  cin >> GenderInput;
  while(GenderInput != "male" && GenderInput != "female")
  {
    cout << "invalid input, please try again" << endl;
    cin >> GenderInput;
  }
}
void Student::setPersonality(Student currStudent)
{
  string userInput;
  string personalityType;
  cout << "Do you know your current personality type?" << endl;
  cin >> userInput;
  while(userInput == "yes" || userInput == "no")
  {
    if(userInput == "yes")
    {
      cout << "Please enter in your personality type" << endl;
      cin >> personalityType;
    }
    else if(userInput == "no")
    {
      cout << "Please follow this link to find out your personality type: https://www.16personalities.com/free-personality-test" << endl;
      cout << "Once you've finished taking the test, please enter in your personality type: ";
      cin >> personalityType;
    }
    else
    {
      cout << "Invalid input, please try again" << endl;
      cin >> userInput;
    }
  }
}
void Student::setYear(Student currStudent)
{
  int yearInput;
  cout << "Please enter in the year you would like to start at" << endl;
  cin >> yearInput;
  if(yearInput >=1 && yearInput <= 4)
  {
    cout << "Your year is now set as " << yearInput;
  }
  else
  {
    cout << "Invalid year, please choose another" << endl;
    cin >> yearInput;
  }
}

void Student::setMajor(Student currStudent)
{
  cout << "Your major is ____"; //WIP because class database is still being developed
}
void Student::setGPA(Student currStudent)
{
  double GPAInput;
  cout << "Please enter in the GPA you would like to start at" << endl;
  cin >> GPAInput;
  if(GPAInput >= 0.0 && GPAInput <= 4.0)
  {
    cout << "Your GPA is now set as " << GPAInput;
  }
  else
  {
    cout << "Invalid GPA, please choose another" << endl;
    cin >> GPAInput;
  }
}

void Student::printStats()
{
  cout << "Your current Major is " << this->studentMajor;
  cout << "Your current GPA is" << this->studentGPA; 
  cout << "Your current Health is" << this->studentHealth;
  cout << "Your current sanity is " << this->studentSanity;
  cout << "Your name is " << this->studentName;
  cout << "Your current year is " << this->studentYear;
}

void Student::printMajor()
{
  cout << "Your current Major is " << this->studentMajor;
}


void Student::printYear()
{
  cout << "Your current Year is " << this->studentYear;
}
void Student::printPersonality()
{
  cout << "Your current Year is " << this->studentPersonality;
}
void Student::printGender()
{
  cout << "Your Gender is " << this->studentPersonality;
}
void Student::printGPA()
{
  cout << "Your personality is " << this->studentPersonality;
}
void Student::printHealth()
{
  cout << "Your current GPA is " << this->studentGPA;
}

void Student::printSanity()
{
  cout << "Your current sanity is " << this->studentSanity;
}
void Student::printName()
{
  cout << "Your name is " << this->studentName;
}