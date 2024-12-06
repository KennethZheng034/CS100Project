#include "Display.h"
#include <iostream> 

using namespace std;

int main() {
    Display gameDisplay;
    gameDisplay.mainMenu();

    int userInput;
    cin >> userInput; 

    if (userInput == 1){
        gameDisplay.characterCustomization();
    }
}
