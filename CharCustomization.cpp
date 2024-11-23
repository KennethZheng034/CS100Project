 #include "CharCustomization.h"
 #include <iostream>
 using namespace std;

void CharCustomization::printStats()
{
  cout << "Your current Major is " << this->studentMajor;
  cout << "Your current GPA is" << this->studentGPA; 
  cout << "Your current Health is" << this->studentHealth;
  cout << "Your current sanity is " << this->studentSanity;
  cout << "Your name is " << this->studentName;
  cout << "Your current year is " << this->studentYear;
}

void CharCustomization::printMajor()
{
  cout << "Your current Major is " << this->studentMajor;
}


void CharCustomization::printYear()
{
  cout << "Your current Year is " << this->studentYear;
}


void CharCustomization::printPersonality()
{
  cout << "Your current Year is " << this->studentPersonality;

}
void CharCustomization::printGender()
{
  cout << "Your Gender is " << this->studentPersonality;
}
void CharCustomization::printGPA()
{
  cout << "Your personality is " << this->studentPersonality;

}


void CharCustomization::printHealth()
{
  cout << "Your current GPA is " << this->studentGPA;
}

void CharCustomization::printSanity()
{
  cout << "Your current sanity is " << this->studentSanity;
}


void CharCustomization::printName()
{
  cout << "Your name is " << this->studentName;
}
void CharCustomization::setGender(Student currStudent)
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
void CharCustomization::setPersonality(Student currStudent)
{
  string userInput;
  string personalityType;
  cout << "Do you know your current personality type?" << endl;
  cin >> userInput;
  if(userInput == "yes")
  {
    cout << "Please enter in your personality type" << endl;
    cin >> personalityType;
    
  }


}
void CharCustomization::setYear(Student currStudent)
{
  string yearInput;
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

void CharCustomization::setMajor(Student currStudent)
{
  cout << "Your major is ____"; //WIP because class database is still being developed
}
void CharCustomization::setGPA(Student currStudent)
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