#include "Orientation.h"

void Orientation::askQuestions(){
    cout << "-------------------------------------------------------------" << endl;
    cout << "Welcome To Orientation! Please Answer The Following Questions" << endl; 
    cout << "-------------------------------------------------------------" << endl;
    for (int i = 0; i < orientationQuestions.size(); i++){
        cout << i+1 << ". " << orientationQuestions[i] << endl;
        cin.ignore();
        getline(cin, userResponse);
        while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout << "There was an error processing input! Please try again." << endl;
        getline(cin, userResponse);
        }
    responses.push_back(userResponse);
    }
}

bool Orientation::isHousingValid(int choice, int year) 
{
if (choice < 1 || choice > housingOptions.size()) {
    cout << "Please input a valid number between 1 and " << housingOptions.size() << "." << endl;
    return false;
}
if (year < 2 && (choice == 5 || choice == 6)) {
    cout << "This housing is only available for 2nd years and above, please make another selection." << endl;
    return false;
}
if (year >= 2 && choice <= 4) {
    cout << "This housing is only available for 1st years, please make another selection." << endl;
    return false;
}
return true;
}

void Orientation::presentHousingOptions(){
    cout << "--------------------------------------------------------------------" << endl;
    cout << "Welcome To The Housing Portal! Please Answer The Following Questions" << endl; 
    cout << "--------------------------------------------------------------------" << endl;
    cout << "Which Residence Hall Would You Like To Choose?\n" << endl;
    for(int i = 0; i < housingOptions.size(); i++){
        cout << i+1 << "." << housingOptions[i] << endl;
    }
    cout << endl;
    cout << "Select A Residence Hall Via Its Respective Number: ";
    
    // int year = fetchYear();
    //int year = 100;
    cin >> housingChoice;
    cout << endl;
    /*do{
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout << "Invalid input, please try again." << endl;
            continue;
    void Orientation::presentHousingOptions(){
        cout << "Welcome To The Housing Portal! Please Answer The Following Questions" << endl; 
        cout << "--------------------------------------" << endl;
        cout << "Which Residence Hall Would You Like To Choose?\n" << endl;
        for(int i = 0; i < housingOptions.size(); i++){
            cout << i+1 << "." << housingOptions[i] << endl;
        }
        cout << "--------------------------------------" << endl;
        cout << "Select A Residence Hall Via Its Respective Number:" << endl;
        
        int year = fetchYear();
        cin >> housingChoice;
        while (!isHousingValid(housingChoice, year)) 
        {
            cin.clear();
            cin.ignore();
            cout << "Invalid input, please try again." << endl;
            cin >> housingChoice;
        }
    } while(!isHousingValid(housingChoice, year));
    updateHousing(housingOptions[housingChoice - 1]);*/
    cout << "Housing Successfully Selected! Welcome to " << housingOptions[housingChoice] <<  "! You're gonna love it here!" << endl;
}

