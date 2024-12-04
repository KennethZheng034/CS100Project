#include "CharCustomization.h"



void CharCustomization::printStats()
{
  cout << "Your current Major is " << this->studentMajor;
  cout << "Your current GPA is" << this->studentGPA; 
  cout << "Your current Health is" << this->studentHealth;
  cout << "Your current sanity is " << this->studentSanity;
  cout << "Your name is " << this->studentName;
  cout << "Your current year is " << this->studentYear;
}

void CharCustomization::printMajor(Student currStudent)
{
  cout << "Your current Major is " << this->studentMajor;
}
void CharCustomization::printYear(Student currStudent)
{
  cout << "Your current Year is " << this->studentYear;
}
void CharCustomization::printPersonality(Student currStudent)
{
  cout << "Your current Year is " << this->studentPersonality;
}
void CharCustomization::printGender(Student currStudent)
{
  cout << "Your Gender is " << this->studentPersonality;
}
void CharCustomization::printGPA(Student currStudent)
{
  cout << "Your personality is " << this->studentPersonality;
}
void CharCustomization::printHealth(Student currStudent)
{
  cout << "Your current GPA is " << this->studentGPA;
}
void CharCustomization::printSanity(Student currStudent)
{
  cout << "Your current sanity is " << this->studentSanity;
}
void CharCustomization::printName(Student currStudent)
{
  cout << "Your name is " << this->studentName;
}