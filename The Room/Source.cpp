#include <iostream>
#include <string>
#include "playerInput.h"

using namespace std;

int main()
{
	//This calls the getusername function and goes straight to the function, then goes down the line again
	string userName = getusername();

	//This is for calling the playerage function
	int age = playerage();

	//This is for the while and do function, it allows the player to play again within the do's parameters
	char again;

	do {
		//This welcomes the player and adds there name at the beginning
		cout << "\n\n***Welcome to the room***\n\n" << userName << " woke up in a room that is empty and surrounded with concrete.\n";

		cout << "\nYour first thought was where you were, Scared and confused you finally calmed down.";
		cout << "\nYou take a look around to see a few things in the room with you.";
		cout << "\nWhat was in view was a table, a knife and a bed from which you woke up from.\n";

		player MainCharacter("23", userName, "Alive");

		MainCharacter.speak("\nHello there I am just a being within this world and dont you forget it.");
		MainCharacter.speak("\nI am the main charcter you are playing as now or rather I am you.");
		MainCharacter.speak("\nOh, crap I wasn't suppose to say that, just for get everything I said.");
		MainCharacter.speak("\nOh and have fun with the simulation.");

		cout << "\nType Knife to get the knife.";
		cout << "\nType Table to go to the table.";
		cout << "\nType Bed to go to the bed.\n";



		//This is for grabbing the statements below
		string userInput = getuserinput();
		//This allows for user input of what they have chose
		getline(cin, userInput);

		//This allows for the play to chose knife as there option
		if (userInput == "knife" || userInput == "Knife")
		{
			cout << "\nYou have decided to pick up the and slice your wrist with it for no reason.";
			cout << "\nYou yourself don't know why you did something like that as your blood slowly leaves your body there was a door there this whole time.";
			cout << "\nYou just didn't see it, better luck next time.";
			cout << "\nJust kidding You woke up right after that, got you good there didn't I.\n";
		}
		//This allows for the play to chose table as there option
		else if (userInput == "table" || userInput == "Table")
		{
			cout << "\nYou decided to go to the table.";
			cout << "\nYou turned it upside down to find that there is a hole within the table right under it.";
			cout << "\nYou went through it, to find yourself in another world. It was absolutely beautiful.";
			cout << "\nYou never woke up after that. No one knows what happened, you just slept and never woke up again.\n";
		}
		//This allows for the play to chose bed as there option
		else if (userInput == "bed" || userInput == "Bed")
		{
			cout << "\nYou decide to go to bed.";
			cout << "\nYou had a feeling that it was all a bad dream.";
			cout << "\nWhen you woke up, it was in fact all a dream.";
			cout << "\nA sigh of relief left your body. You said, Thank god it was just a dream.\n";
		}
		//This is if the player has inputted the wrong word
		else
		{
			cout << "Oh no you typed in the wrong thing";
		}

		//This is for my pointer and refrence
		string comment;
		comment = "\nThe world is round\n";

		//This is my refrence that just gives some tips about the world
		string& ref_comment = comment;
		cout << ref_comment << "\nDid you know that the world is very roand. It is not flat at all.";
		cout << "\nWell mabye it is round but I like to think that it is square haha.";
		cout << "\nGet its square no i'll stop.|n";
		
		//This is my pointer that just gives you a little info
		string* pnt_comment = &comment;
		cout << "\nHey did you want to see hexa decimal numbers well here you go because why not: "
			 << &comment;

		//This just states if the player would like to play again or not
		cout << "\n\nDo you want to play again (Y/N)\n\n";
		cin >> again;

		//This allows the player to play again if the wont or quit if they want.
	} while (again == 'Y' || again == 'y');
	system("pause");

	return 0;

}
