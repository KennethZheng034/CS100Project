 #include "CharCustomization.h"
 
void CharCustomization::printMajor(Student currStudent)
{
    cout << this->studentMajor << " is your major.";
}
void CharCustomization::printGPA(Student)
{
    cout << this->studentGPA << " is your current GPA.";
}
void CharCustomization::printHealth(Student)
{
    cout << this->studentHealth << " is your current health";
}
void CharCustomization::printSanity(Student)
{
    cout << this->studentSanity << " is your current sanity";
}

void CharCustomization::printName(Student)
{
    cout << this->studentName << " is your name";
}