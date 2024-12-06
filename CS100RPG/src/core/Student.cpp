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
string Student::fetchName()
{
  return this->studentName;
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

void Student::setGender()
{
  string GenderInput;
  cout << "Are you a male or female?" << endl;
  cin >> GenderInput;
  while(GenderInput != "male" && GenderInput != "female")
  {
    cout << "invalid input, please try again" << endl;
    cin >> GenderInput;
  }
  this->studentGender = GenderInput;
}
void Student::setPersonality()
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
      while(personalityType != "INTJ-A" || personalityType != "INTJ-T" || personalityType != "INTP-A" || personalityType != "INTP-T" 
      || personalityType != "ENTJ-A" || personalityType != "ENTJ-T" || personalityType != "ENTP-A" || personalityType != "ENTP-T" 
      || personalityType != "INFJ-A" || personalityType != "INFJ-T"  || personalityType != "INFP-A" || personalityType != "INFP-T"
      || personalityType != "ENFJ-A" || personalityType != "ENFJ-T" || personalityType != "ENFP-A" || personalityType != "ENFP-T" 
      || personalityType != "ISTJ-A" || personalityType != "ISTJ-T" || personalityType != "ISFJ-A" || personalityType != "ISFJ-T"
      || personalityType != "ESTJ-A" || personalityType != "ESTJ-T" || personalityType != "ESFJ-A" || personalityType != "ESFJ-T"
      || personalityType != "ISTP-A" || personalityType != "ISTP-T" || personalityType != "ISFP-A" || personalityType != "ISFP-T"
      || personalityType != "ESTP-A" || personalityType != "ESTP-T" || personalityType != "ESFP-A" || personalityType != "ESFP-T")
      {
        cout << "Invalid personality type, please try again" << endl;
        cin >> personalityType;
      }
      this->studentPersonality == personalityType;
    }
    else if(userInput == "no")
    {
      cout << "Please follow this link to find out your personality type: https://www.16personalities.com/free-personality-test" << endl;
      cout << "Once you've finished taking the test, please enter in your personality type: ";
      cin >> personalityType;
      while(personalityType != "INTJ-A" || personalityType != "INTJ-T" || personalityType != "INTP-A" || personalityType != "INTP-T" 
      || personalityType != "ENTJ-A" || personalityType != "ENTJ-T" || personalityType != "ENTP-A" || personalityType != "ENTP-T" 
      || personalityType != "INFJ-A" || personalityType != "INFJ-T"  || personalityType != "INFP-A" || personalityType != "INFP-T"
      || personalityType != "ENFJ-A" || personalityType != "ENFJ-T" || personalityType != "ENFP-A" || personalityType != "ENFP-T" 
      || personalityType != "ISTJ-A" || personalityType != "ISTJ-T" || personalityType != "ISFJ-A" || personalityType != "ISFJ-T"
      || personalityType != "ESTJ-A" || personalityType != "ESTJ-T" || personalityType != "ESFJ-A" || personalityType != "ESFJ-T"
      || personalityType != "ISTP-A" || personalityType != "ISTP-T" || personalityType != "ISFP-A" || personalityType != "ISFP-T"
      || personalityType != "ESTP-A" || personalityType != "ESTP-T" || personalityType != "ESFP-A" || personalityType != "ESFP-T")
      {
        cout << "Invalid personality type, please try again" << endl;
        cin >> personalityType;
      }
    }
    else
    {
      cout << "Invalid input, please try again" << endl;
      cin >> userInput;
    }
  }
}
void Student::setYear()
{
  int yearInput;
  cout << "Please enter in the year you would like to start at" << endl;
  cin >> yearInput;
  while(yearInput < 1 || yearInput > 4)
  {
    cout << "Invalid year, please choose another" << endl;
    cin >> yearInput;
  }
  cout << "Your year is now set as " << yearInput;
}

void Student::setMajor()
{
  cout << "Your major is ____"; //WIP because class database is still being developed
}

void Student::setName()
{
  string nameInput;
  cout << "Please enter in your name" << endl;
  cin >> nameInput;
  while(cin.fail())
  {
    cout << "Invalid name, please choose another name" << endl;
    cin >> nameInput;
  }
  cout << "Your name set as " << nameInput;
}
void Student::setGPA()
{
  double GPAInput;
  if(this->fetchYear() == 1)
  {
    cout << "Your GPA has  been set to 0.0 since you're a first year" << endl;
    this->studentYear = 0.0;
    return;
  }
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
void Student::updateMajor(string newMajor)
{
  this->studentMajor = newMajor;
} 

void Student::updateDegreeAudit()
{
  //leave to haokun.
}
void Student::updateGPA(double GPAInput)
{
    this->studentGPA = GPAInput;
}
void Student::updateHealth(int healthInput)
{
    this->studentHealth = healthInput;
}
void Student::updateSanity(int sanityInput)
{
    this->studentSanity = sanityInput;
} 

void Student::registerClass(string classToAdd)
{
    this->studentSchedule.push_back(classToAdd);
} 
void Student::dropClass(string classToDrop)
{
    for(unsigned int i = 0; i < studentSchedule.size(); i++)
    {
        if(studentSchedule.at(i) == classToDrop)
        {
            cout << "removed " << classToDrop << "from your schedule" << endl;
            this->studentSchedule.erase(this->studentSchedule.begin()+i);
            return;
        }
    }
}
