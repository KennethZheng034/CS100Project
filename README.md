# life@UCR
 
 > Authors: \<[Hannah Hwang](https://github.com/hhannahhwang), [Andres Lopez](https://github.com/AndresAtUCR), [Haokun Yang](github.com/HaokunYang123), [Kenneth Zheng](github.com/KennethZheng034)\>

## Project Description
 Our project is a text-based role-playing game (RPG) where the player is a UCR student with multiple tasks, academic and non-academic, with the ultimate goal of successfully graduating with their chosen degree. As UCR students ourselves and due to our interest in game development, we wanted to create a game that reflects upon the college life here at UCR. By allowing players to customize their character based on their major/year, we anticipate the game to be a personalized experience for each player and hopefully a "comfort" game where they can have fun and time to time make not-so-wonderful choices which would bare consequences in real life, but less so in this virtual realm. Additionally, we hope this game could be helpful to incoming students who may struggle with navigating college life, often experiencing imposter syndrome, as a guiding resource in addition to it being a source of entertainment. For the development of our project, we plan to use C++ and VScode as our editor. 

 When playing our game, the player will be prompted to input their major, year, quarter, GPA, and personality type during the initial character formulation stage. 

 * Major : string
 * Year : integer
 * Quarter : string
 * GPA : double
 * Personality Type : string

 Then the game will formulate a story based on the initial setting and prompt the player to make decisions along the way until they "graduate" within the game. The player's choices throughout the game will influence the output of the character's health, GPA, and degree process -- the consequences/benefits of each additional player input will be reflected upon the character. We envision the outputs to be an increase/decrease in stat, subsequent events following the player's input, and dialogue as necessary. All aspects of the game will be implemented in the terminal. If it is also possible, we hope to implement a progress saving feature by writing the player's input into a file that auto saves so the player can pick up from where they left off upon returning to the game. 

## Navigation Diagram
 Our **Navigation Diagram** is down below:
![alt text](<Navigation Diagram Life@UCR - CSNotGetting100.png>)
 This user **Navigation Diagram** provides a general consensus for what options will be prompted to the player during gameplay.

## Class Diagram

![UML Diagram Life@UCR - CSNotGetting100 (1)](https://github.com/user-attachments/assets/3084f0cb-d1fe-41f8-a9aa-50a289666cae)

**Display:** The parent class of all display subclasses, is also a child class of game logic. It handles everything related to printing and displaying results/information to the terminal. All display features handeled in the terminal. 

**Character Customization:** The child Display class handles displaying the player’s stats and characteristics.

**User Choice:** This is a child class of Display, used to display choices users can select after a new event is prompted. 

**OrientationDisplay** This is a child class of display that displays the questions asked by the orientation Q&A. It will display the available housing options as well as the housing the user ultimately chooses.

**Student:** Creates a student object that sets, stores, and modifies all data about the character (major, gpa, name, year, quarter) and is the core class of the game relating to every other class either through composition or just relation. 

**Orientation:** Class that initializes the questions utilized in the orientation feature and handles housing initialization. Will be printed through Orientation Display. 

**Registration:** Takes in a vector of course objects from the courses class which is utilized for the player to pick and choose preferred classes. 

**Courses:** Stores data of all classes in regards of courseID, location, TA, instructor, and additional variables related to class object. Database for Registration class. 

**Game Logic:** Provides structure for how the game functions as a whole and holds several major game mechanics.

**GradRequirementChecker:** Class that functions as flags set in place to determine student graduation eligibility.


 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * Make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
>  * Each team member should also submit the Individual Contributions Form on Canvas for phase III. In this form, you need to fill in the names of all team members, the percentage of work contributed by each member for phase III, and a description of their contributions. Remember that each team member should submit the form individually.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history.
>  * Each team member should also submit the Individual Contributions Form on Canvas for this final phase. In this form, you need to fill in the names of all team members, the percentage of work contributed by each member for the final phase, and a description of their contributions. Remember that each team member should submit the form individually.
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
