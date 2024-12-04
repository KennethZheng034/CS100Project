#include "Student.h"
#include <vector>
#include <string>

class GameLogic : Student
{
   private:
      int currentYear;
      Student currentStudent;
      double playerProgress;
      enum achievementStatus;
      string currentQuarter;
      int currentWeek;
      MajorDatabase;

    public:
        GameLogic();
        ~GameLogic();
        void updateMajor(string); 
        void updateDegreeAudit();
        void updateGPA(double);
        void updateHealth(int);
        void updateSanity(int); 
        void registerClass(string); 
        void dropClass(string);
        void saveGame(); 
        void loadGame(); 
        void createCharacter();
        void resetGame();
}