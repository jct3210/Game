#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
using namespace std;
double money = 7;
int run;
int jail = 0;
void checkmoney(int money, int value);
int main()
{
	cout << "Welcome to Hosea's Trail" << endl;
	Sleep(2000);
	cout << "This game will be played like Oregon Trail" << endl << "When you enter words please refrain from using capital leters" << endl;
	Sleep(2000);
	cout << "Good afternoon Player, your task is to successfully traverse your way to New York and back as fast as possible in order to attend the communist training school. You will face many decisions throughout your journey - make the right ones and you arrive back in Birmingham safely. However, if you make the wrong ones you will face dire consequences. As you will soon learn people in America do not like people like you, black communists" << endl;
	Sleep(10000);
	cout << "Here is $7 to help you along your way. It isnt't much but it should be able to help" << endl;
	Sleep(5000);
	cout << "You take a train this takes $3 of your money away" << endl;
	money = money - 3;
	Sleep(3000);
	cout << "a detective apporaches you on the train" << endl;
	Sleep(4000);
	cout << "Detective: Halt, this train is not a colored train!" << endl;
	int encounter1;
	cout << "You have been spotted!" << endl;
	// enter some code for mini game here.
	Sleep(3000);
	cout << "That conductor looks to be mighty mean. We can not miss this train or we will be later for the National Training School in New York! Do we try to sneak aboard the train?" << endl;
	string word;
	string word2;
	cin >> word;
	if (word == "yes")
	{
		cout << "You do not alert conductor to your presence, and make it aboard the train." << endl;
	}
	else if (word == "no")
	{
		cout << "The conductor forces you to get off the train, and watches to make sure you do not get back on. You do not arrive in time for the National Training School" << endl;
	}

	cout << "Knoxville TN -  Temperature 32 Degrees Fahrenheit" << endl;
	cout << "It is too cold to remain exposed to the elements for an extenede period of time. There are very frew people on the streets... I think we should go steal from a nearby shop for money, food, and cloths." << endl;
	cin >> word2;
	string word3;
	cin >> word3;
	if (word2 == "yes")
	{
		cout << "Do you want to loot it or beg?" << endl;
		if (word3 == "beg")
		{
			cout << "you go out to beg" << endl;
			//starts a mini game of sorts
		}
		if (word3 == "loot")
		{
			cout << "you go to loot" << endl;
			//starts another minigame of sorts
		}

	}

	cout << "Alright lets get back on the train" << endl;
	Sleep(20000);
	cout << "New York, NY" << endl;
	cout << "Alright there is the bus stop. We need to catch a bus tothe ferry in order to get across the river to the training camp. The buses in Birmingham are segregated but I'm not seeing any signs about any segreation on the buses her. Do we risk it and sit in the front with the heat?" << endl;
	string word3;
	cin >> word3;
	if (word3 == "yes")
	{
		cout << "nothing happens" << endl;
	}
	if (word3 == "no")
	{
		cout << "nothing happens your in the north" << endl;
	}
	cout << "Here is the training camp just up ahead! We made it! Halkf way home!" << endl;
	Sleep(30000);
	cout << "Camp Director: Do you guys want some pamphlets to spread the cause of communism across America?" << endl;
	string word4;
	cin >> word4;
	int pamphlets = 0;
	if (word4 == "Yes")
	{
		cout << "you gain pamphlets" << endl;
		pamphlets = 1;
	}
	else if (word4 == "No")
	{
		//something no no happens
	}
	cout << "Camp Director: You guys can use my car to get home. Just watch out for the police - they are not to found of African-Americans driving or having pamphlets" << endl;
	cout << "There are cops! We can't be seen by them! We need to run!" << endl;
	cout << "The pamphlets! We need to get rid of them!" << endl;
	string word5;
	cin >> word5;
	string word6;
	if (pamphlets == 1)
	{
		cout << "Do you want to get rid of the pamphlets" << endl;
		cin >> word6;
		if (word6 == "yes")
		{
			cout << "you try to dump the letter before the police showup" << endl;
			//implement some sort of change system
		}
		if (word6 == "no")
		{
			cout << "African-Americans arrested trying to incite rot in the South and spread anarchy" << endl;
			//implement some sort of jail time system
		}
	}
	return 0;
}













