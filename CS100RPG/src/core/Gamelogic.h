#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include <iostream>
#include <vector>
#include "../core/Student.h"
using namespace std;
class Gamelogic : public Student{
    private:
    int classAttendance;
    vector<string> choices;
    public: 
    Gamelogic() : classAttendance(0) {
        choices = {
            "Attend Class",
            "Go to library and do HW",
            "Hang out with Friends",
            "Watch Netflix and procrastinate",
            "I can't do this anymore"
        };
    }
    void displayChoices();
    void playGame();
};
#endif