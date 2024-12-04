#include "GameLogic.h"

GameLogic::GameLogic()
{

}
GameLogic::~GameLogic()
{

}

void GameLogic::updateMajor(string newMajor)
{
  this->studentMajor = newMajor;
} 


void GameLogic::updateDegreeAudit()
{

}
void GameLogic::updateGPA(double GPAInput)
{
    this->studentGPA = GPAInput;
}
void GameLogic::updateHealth(int healthInput)
{
    this->studentHealth = healthInput;
}
void GameLogic::updateSanity(int sanityInput)
{
    this->studentSanity = sanityInput;
} 

void GameLogic::registerClass(string classToAdd)
{
    this->studentSchedule.push_back(classToAdd);
} 
void GameLogic::dropClass(string classToDrop)
{
    for(unsigned int i = 0; i < studentSchedule.size(); i++)
    {
        if(studentSchedule.at(i) == classToDrop)
        {
            cout << "removed " << classToDrop << "from your schedule" << endl;
            this->studentSchedule.erase(this->studentSchedule.begin()+i);
            return;
        }
    }
}
void GameLogic::saveGame()
{

} 
void GameLogic::loadGame()
{

} 
void GameLogic::createCharacter()
{

}
void GameLogic::resetGame()
{

}