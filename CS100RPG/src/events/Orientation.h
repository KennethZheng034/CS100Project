#pragma once

#include <iostream>
#include <vector>
#include "../core/Student.h"

using namespace std;

class Orientation : public Student{
    private:
    vector <string> housingOptions{"Aberdeen Inverness", "Pentland Hills", "Lothian","Dundee", "North District", "Glen Mor", "Off Campus"};
    vector <string> orientationQuestions{"If you could be anywhere in the world where would you go?",
                                        "If you had a large amount of money, what would you do with it?",
                                        "Are you an early morning bird or a night owl?",
                                        "What might consciousness look like if it were experienced through a completely different form of life, such as a self-aware artificial intelligence, and how would the boundaries of perception, self-awareness, and memory shift if this consciousness were housed in a non-biological, decentralized network rather than a single, organic brain?",
                                        "Are you a dog person or a cat person?"};
    int housingChoice = 0;
    string userResponse = "";
    vector <string> responses;
    string currHousing;
    public:
        bool isHousingValid(int, int);
        void askQuestions();
        void presentHousingOptions();
        void updateHousing(const string&);
        void setHousing(const string&);
};