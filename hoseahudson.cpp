#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>

using namespace std;

double money = 7;
int run;
int jail = 0;

void checkmoney(int money, int value);
void endgame(int jail);

int main()
{
	cout << "Welcome to Hosea's Trail" << endl;
	Sleep(3000);
	cout << "This game will be played like Oregon Trail" << endl;
	Sleep(4000);
	cout << "Good afternoon Player, your task is to successfully traverse your way to New York and back as fast as possible in order to attend the communist training school. You will face many decisions throughout your journey - make the right ones and you arrive back in Birmingham safely. However, if you make the wrong ones you will face dire consequences. As you will soon learn people in America do not like people like you, black communists" << endl;
	Sleep(20000);
	cout << "Here is $7 to help you along your way. It isnt't much but it should be able to help" << endl;
	Sleep(6000);
	cout << "You take a train this takes $3 of your money away" << endl;
	money = money - 3;

	Sleep(4000);
	cout << "a detective apporaches you on the train" << endl;
	Sleep(5000);

	Sleep(3000);
	cout << "a detective apporaches you on the train" << endl;
	Sleep(4000);

	cout << "Detective: Halt, this train is not a colored train!" << endl;
	int encounter1;
	cout << "You have been spotted!" << endl;

	// enter some code for mini game here.

	Sleep(3000);

	cout << "That conductor looks to be mighty mean. We can not miss this train or we will be later for the National Training School in New York! Do we try to sneak aboard the train" << endl;

	cout << "That conductor looks to be mighty mean. We can not miss this train or we will be later for the National Training School in New York! Do we confront the conductor or do we try to sneak aboard the train" << endl;

	string word;

	if (word == "yes")
	{
		cout << "You do not alert conductor to your presence, and make it aboard the train." << endl;
	}
	else if (word == "no")
	{
		cout << "The conductor forces you to get off the train, and watches to make sure you do not get back on. You do not arrive in time for the National Training School" << endl;


	}
	return 0;
}



	}
	return 0;
}

	void endgame(int jail)
	{
		if (jail == 1)
		{
			cout << "Game Over" << endl;
		}
	}


	void endgame(int jail)
	{
		if (jail == 1)
		{
			cout << "Game Over" << endl;
		}
	}

	
