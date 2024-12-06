#include "display/Display.h"
#include "events/Orientation.h"
#include "core/Gamelogic.h"
#include <iostream> 

using namespace std;

int main() {
    Display gameDisplay;
    gameDisplay.mainMenu();

    int userInput;
    cin >> userInput;
    cout << endl; 

    if (userInput == 1){
        gameDisplay.characterCustomization();
    }

    Orientation gameOrientation;
    gameOrientation.askQuestions();
    
    cout << endl; 
    cout << "Congratulations you finished Orientation!" << endl; 

    cout << endl;
    gameOrientation.presentHousingOptions();
    cout << endl;
    
    cout << "------------------------------------------------" << endl;
    cout << "[**Let's Start the game!**]" << endl;
    cout << "------------------------------------------------" << endl;

    cout << "";
    // Gamelogic game;
    // game.displayChoices();
    // cout << endl;
    // cout << "What choice do you want to make? "; 

    
    
    


}
