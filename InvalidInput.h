/*******************************************************************************
 _                 _ _     _ _                   _     _     
(_)_ ____   ____ _| (_) __| (_)_ __  _ __  _   _| |_  | |__  
| | '_ \ \ / / _` | | |/ _` | | '_ \| '_ \| | | | __| | '_ \ 
| | | | \ V / (_| | | | (_| | | | | | |_) | |_| | |_ _| | | |
|_|_| |_|\_/ \__,_|_|_|\__,_|_|_| |_| .__/ \__,_|\__(_)_| |_|
                                    |_|                      
Sarah Bass
Student 715560
Currently enrolled on C++ 6PM-9PM
Professor Zhen Zhai
Project #4 C++: Minion Food Project
Minion.h File : Exception Class: Invalid input
******************************************************************************/
#ifndef INVALIDINPUT_H
#define INVALIDINPUT_H
#include <string>

using namespace std;
class InvalidInput
{
    public:
//Look at catch by reference on powerpoint 
//also look at initialie list for 
InvalidInput() : message()
{
    
    message = "Not serving requested drinks. Drink order ignored.\n\n" 
};
void cause() {cout << message;}
private:
string message:
};

#endif  //INVALIDINPUT_H

/*one exception class: InvalidInput
output this message: "Invalid input [" + s + "]."
the exception class has one void member function cause() to output message
initialiaze private string with initialization list on cnstructor */