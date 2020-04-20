#pragma once
#include <iostream>
#include <string>

using namespace std;

//This is for calling a function
int playerage();
string getusername();
string getuserinput();

class player
{
//This makes the infomation public
public:
	void speak(string Intro);
	player(string age, string name, string status);

//This makes the info mation private
private:
	string Age;
	string Name;
	string Status;
};

//class playerStats
//{
	//Dont know what to do here just yet nothing is coming to mind at the moment
//};