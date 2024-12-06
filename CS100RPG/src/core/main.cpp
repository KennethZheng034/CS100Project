#include "Student.h"
#include <iostream> 

int main() {
    Student testStudent = Student("computer science", "Hannah", 2.19, 0, 0);
    cout << testStudent.getMajor() << endl;
}
