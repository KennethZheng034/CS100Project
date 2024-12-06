#include "Gamelogic.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

GameLogic::GameLogic()
{

}
GameLogic::~GameLogic()
{

}
void GameLogic::saveGame(Student currStudent, const string& newSave)
{
    ofstream saveFile("newSave");
    if(!saveFile.is_open())
    {
        cout << "Failed to open file, please try again!" << endl;
        return;
    }

    saveFile << currStudent.fetchName() << endl;
    saveFile << currStudent.fetchHealth() << endl;
    saveFile << currStudent.fetchGPA() << endl;
    saveFile << currStudent.fetchGender() << endl;
    saveFile << currStudent.fetchSanity() << endl;
    saveFile << currStudent.fetchPersonality() << endl;
    saveFile << currStudent.fetchMajor() << endl;
    saveFile << currStudent.fetchYear() << endl;
    saveFile.close();
    cout << "Game saved successfully, you may now exit safely" << endl;
} 
// void GameLogic::loadGame(Student loadStudent)
// {
//     ifstream saveFile("saveFile");
//     if(!saveFile.is_open())
//     {
//         cout << "Failed to open file, please try again" << endl;
//         return;
//     }
//     string name;
//     int health, sanity,  year;
//     double gpa;
//     string gender, major;
//     string personality;
//     getline(saveFile, name);
//     saveFile >> health >> gpa >> sanity >> personality;
//     saveFile.ignore();
//     getline(saveFile, gender);
//     getline(saveFile, major);
//     saveFile >> year;
    
//     saveFile.close();
//     loadStudent.setName();

// } 
void GameLogic::createCharacter(string major, string name, double gpa, int health, int sanity, string personality)
{
    this->studentName = name;
    this->studentMajor = major;
    this->studentGPA = gpa;
    this->studentHealth = health;
    this->studentSanity = sanity;
    this->studentPersonality = personality;

}
void GameLogic::resetGame()
{

}

//make a storyboard
//After registration, what do they do, what are their options.
//have student class, orientation done,

