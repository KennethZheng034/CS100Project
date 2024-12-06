#include "display/Display.h"
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
}
