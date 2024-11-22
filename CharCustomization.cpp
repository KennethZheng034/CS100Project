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
  cout << "Your namem is " << this->studentName;
}
