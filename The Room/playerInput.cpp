#include <iostream>
#include <string>
#include "playerInput.h"

using namespace std;

//This is a function for the username
string getusername()
{
	//This is a string that is for getting the username
	string userName;
	cout << "What is your name: ";
	//This allows the user to input there name
	getline(cin, userName);

	//This returns the name
	return userName;
}


//This is a function for inputting the users age
int playerage()
{
	//This is for the default age. I set it to zero but, it can be any whole number.
	int age = 0;
	cout << "\nHow old are you: ";
	//This allows for user input of thier age
	cin >> age;

	//This returns the age
	return age;
}

//This is a string for user input when a choice comes up.
string getuserinput()
{
	//This is for grabbing the statements below
	string userInput;
	//This allows for user input of what they have chose
	getline(cin, userInput);

	//This returns user input
	return userInput;
}

//This is the players main character and is used for dialogue that is
//used by the player class.
void player::speak(string Intro)
{
	cout << endl << Name << Intro << endl;
}

//This is for calling the function for private information
player::player(string age, string name, string status)
{

	cout << "\nPlayer class begun.......";

	//This is for the player intro to be used for getting players info
	Age = age;
	Name = name;
	Status = status;

}