#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 -> Done
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 char       -> single character  = 1 byte
 int        -> integer = 4 bytes
 float      -> floating point value = 4 bytes
 bool       -> true or false. (true/false can be either written out or the numbers 1 and 0) = 1 byte
 double     -> more accurate floating point value = 8 bytes
 void       -> no value 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'

    //primitiveType declarations:
    char letter = 'a';
    char range = 'c';
    char selection ='g';

    int counter = 1;
    int stepSize = 5551;
    int largeNumber = 1000000000;

    float walkingSpeed = 15.235f;
    float acceleration = 5.f;
    float weight = 125.5f;

    bool deviceState = false; 
    bool interior = 0; FIXME never use 0 or 1 to indicate true or false
    bool passby = true; 

    double retriggerRate = 0.0;
    double timeframe = 15.1536;
    double distance = 12000.23;


    

    //ignoreUnused variables:
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    ignoreUnused(letter, range, selection); //char
    ignoreUnused(counter, stepSize, largeNumber); //int
    ignoreUnused(walkingSpeed, acceleration, weight); //float
    ignoreUnused(deviceState, interior, passby); //bool
    ignoreUnused(retriggerRate, timeframe, distance); //double
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool enableLight (bool switchState, int switchSize = 150, bool peopleHome = false)
{
    ignoreUnused(switchState, switchSize, peopleHome);
    return {};
}

/*
 2)
 */
void drawGraphics(bool windowFocus, float windowSize = 15.24f, int windowHeight = 123)
{
    ignoreUnused(windowFocus, windowSize, windowHeight);
}

/*
 3)
 */
float getFrequency (float amplitude, float time)
{
    ignoreUnused(amplitude, time);
    return {};
}

/*
 4)
 */
int setColor (int red, int blue, int green = 254)
{
    ignoreUnused(red, blue, green);
    return {};
}

/*
 5)
 */
double increaseTemperature (int amount, bool raining)
{
    ignoreUnused (amount, raining);
    return {};
}

/*
 6)
 */
void displayCredits (float versionNumber, char initials = 'a')
{
    ignoreUnused(versionNumber, initials);
}

/*
 7)
 */
char createRandomLetter (int randomSeed, char startingLetter)
{
    ignoreUnused(randomSeed, startingLetter);
    return {};
}

/*
 8)
 */
double setBPM (int tempo, int divisions = 4)
{
    ignoreUnused(tempo, divisions);
    return {};
}

/*
 9)
 */
void calibrateSpeakers (double xPosition, double yPosition, int loudness = 60)
{
    ignoreUnused(xPosition, yPosition, loudness);
}

/*
 10)
 */
 void insertEffect (bool slotFree, int slotNumber)
 {
    ignoreUnused(slotFree, slotNumber);
 }

int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    rentACar (250, 5);
    
    //2) 
    drawGraphics(true); 
    
    //3)
    getFrequency(0.5f, 125.5f);

    //4)
    setColor (50, 40, 20);
    
    //5)
    increaseTemperature(100, false);
    
    //6)
    displayCredits(1.254f);
    
    //7)
    createRandomLetter (125, 'f');
    
    //8)
    setBPM (120);
    
    //9)
    calibrateSpeakers(15.235, 5.524);
    
    //10)
    insertEffect(true, 1);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
