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
![Navigation Diagram Life@UCR - CSNotGetting100](https://github.com/user-attachments/assets/24eafdaf-b278-4498-9db7-5ffa91bb55dd)

 This user **Navigation Diagram** provides a general consensus for what options will be prompted to the player during gameplay.


## Screen Layout
Our **Screen Layout** is down below:

![Screen Layout Life@UCR - CSNotGetting100](https://github.com/user-attachments/assets/b27df779-3c55-4d3f-811d-9eed7d2ccf21)

## Class Diagram

Our **Class Diagram** is down below:

![UML Diagram Life@UCR - CSNotGetting100 (1)](https://github.com/user-attachments/assets/3084f0cb-d1fe-41f8-a9aa-50a289666cae)

**Display:** The parent class of all display subclasses, is also a child class of game logic. It handles everything related to printing and displaying results/information to the terminal. All display features handeled in the terminal. 

**Character Customization:** The child Display class handles displaying the player’s stats and characteristics.

**User Choice:** This is a child class of Display, used to display choices users can select after a new event is prompted. 

**OrientationDisplay:** This is a child class of display that displays the questions asked by the orientation Q&A. It will display the available housing options as well as the housing the user ultimately chooses.

**Student:** Creates a student object that sets, stores, and modifies all data about the character (major, gpa, name, year, quarter) and is the core class of the game relating to every other class either through composition or just relation. 

**Orientation:** Class that initializes the questions utilized in the orientation feature and handles housing initialization. Will be printed through Orientation Display. 

**Registration:** Takes in a vector of course objects from the courses class which is utilized for the player to pick and choose preferred classes. 

**Courses:** Stores data of all classes in regards of courseID, location, TA, instructor, and additional variables related to class object. Database for Registration class. 

**Game Logic:** Provides structure for how the game functions as a whole and holds several major game mechanics.

**GradRequirementChecker:** Class that functions as flags set in place to determine student graduation eligibility.

 > ## Phase III

 **Updated UML Diagram**

![UML Diagram Life@UCR - CSNotGetting100 (3)](https://github.com/user-attachments/assets/e0d41e11-64e4-44a6-ab97-26b7ee28367b)
Update diagram to include additional display child classes and List variable in Student class to keep track of player's schedule.

**S.O.L.I.D Principles**

We did not make any major changes in terms of applying S.O.L.I.D principles because we thought our UML diagram did not have any violations. So the following text is how our diagram abides by 3 off the different principles as it was stated in the lab slides.

* Single Responsibility Principle (SRP) : SRP states a class should be responsible for only one purpose. We have seperate classses that modifies/manages data and a display parent class what handles all console output. For a more specific example, the "Courses" class manages all data of a course such as ID, title, credit,... as well as setter methods and the "CourseInfo" class which is a child class of the "Display" class will output all the info related to a course when prompted.

* Open-Closed Principle (OCP) : OCP states that software entities should be open for extension but closed for modification. Our implementation of the "Display" parent function to handle all console output and having multiple child classes for specific instances such as main menu output, orientation output, etc... illustrates OCP since we do not need to modify the display class at all, just need to *extend* as in create child classes.

* Interface Segregation Principle (ISP) : ISP states that a client should never be forced to implement/use interfaces/methods that it doesn't need. We made sure in our diagram that each class doesn't contain any functions that it won't need to use. For example, the registration class handles only the things related to a student registering such as add/removing/recommending courses and doesn't include any functions or variables that are not applicable to registration.
 
 > ## Final deliverable
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.


 
 ## Screenshots
 > Screenshots of the input/output after running your application
![MainMenuScreenshot](https://github.com/user-attachments/assets/16351f5e-5ecb-4206-bec7-5a885c7b7aa7)
![CharacterCustomizationScreenshot](https://github.com/user-attachments/assets/c2c6b2f2-5d5e-4ecd-86b0-4037e8cc0784)
![HousingScreenshot](https://github.com/user-attachments/assets/b3401b79-5892-4315-8d81-63f37ef9052a)
![OrientationScreenshot](https://github.com/user-attachments/assets/d0913fa4-025c-4300-8192-18e12a303f61)
 ## Installation/Usage
 > Our program runs fully in the terminal. There is no installation to go through other than having a code environment set up. 
 ## Testing
 > Our progam was tested via Continuous Integration.
 > Within the CI's yaml file, we: 
    * Updated the google test submodule. 
    * Built our game via "cmake ." and "make". 
    * Ran the "Run tests" job, which ran our tests executable.
    * Lastly, we ran "Run the game with simulated input" and did just that.
 > At the very top of our repository, there is a little green checkmark that demonstrates that our program runs with no errors!
 
