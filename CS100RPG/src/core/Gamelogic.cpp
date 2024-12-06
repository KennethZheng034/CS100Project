#include "Gamelogic.h"
#include <iostream>
#include <vector>
using namespace std;

void Gamelogic::displayChoices(){
    for (int i = 0; i < choices.size(); i++){
        cout << i+1 << ". " << choices[i] << endl;
    }
}
// void Gamelogic::okayGame(){
// }