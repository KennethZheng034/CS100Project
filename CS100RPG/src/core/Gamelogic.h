#include "Student.h"
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