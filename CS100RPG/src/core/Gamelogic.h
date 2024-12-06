#ifndef DISPLAY_H
#define DISPLAY_H


#include "Student.h"
#include <fstream>
#include <vector>
#include <string>

class GameLogic : Student
{
   private:
      int currentYear;
      Student currentStudent;
      double playerProgress;
      string currentQuarter;
      int currentWeek;
      ofstream saveFile;

    public:
        GameLogic();
        ~GameLogic();
        void saveGame(Student); 
        void createCharacter(string major, string name, double gpa, int health, int sanity, string personality);
        void resetGame();
};

#endif
// #ifndef GAMELOGIC_H
// #define GAMELOGIC_H

// #include <iostream>
// #include <vector>
// #include "../core/Student.h"
// using namespace std;

// class Gamelogic : public Student{
//     private:
//     int classAttendance;
//     vector<string> choices;

//     public: 
//     Gamelogic() : classAttendance(0) {
//         choices = {
//             "Attend Class",
//             "Go to library and do HW",
//             "Hang out with Friends",
//             "Watch Netflix and procrastinate",
//             "I can't do this anymore"
//         };
//     }

// //     void displayChoices();
// //     void playGame();

// };

// #endif