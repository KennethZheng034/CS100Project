#include "Student.cpp"

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
        GameLogic;
        ~GameLogic;
        void updateMajor(string); 
        void updateDegreeAudit();
        void updateGPA(double);
        void updateHealth(int);
        void updateSanity(int); 
        void registerClass(); 
        void dropClass();
        void saveGame(); 
        void loadGame(); 
        void createCharacter();
        void resetGame();
}