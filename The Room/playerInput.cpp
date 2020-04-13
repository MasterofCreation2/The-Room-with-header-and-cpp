#include<iostream>
#include<string>

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
	//This is a string that is for getting the players answer.
	string userInput;
	cout << "What do you want to do: \n";
	//This allows for user input
	getline(cin, userInput);

	//This returns user input
	return userInput;
}