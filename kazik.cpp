
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <conio.h>
#include <Windows.h>
#include <string>
using namespace std;
#define DEBUG 


int main()
{

	srand(time(NULL));
	cout << "in the tavern, the innkeeper invites you to play a game..." << endl;
#ifdef DEBUG
	Sleep(3000);
#endif
	buck:
	cout << "Innkeeper: would you like to play?" << endl << "--------------------" << endl << " choose yes / no" << endl;
	string choose;
	cin >> choose;
	if (choose == "yes")
	{
		string whatthegame;
	Link:
		cout << "Innkeeper: Choose the game!" << endl << "--------------------" << endl << "choose thimbles / cards" << endl;
		cin >> whatthegame;
		if (whatthegame == "thimbles")
		{
#ifdef DEBUG
			cout << "Innkeeper: OK...watch my hands! If you win,ill give you money." << endl;
			Sleep(3000);
			cout << "But if you loose, ill take your boots" << endl;
			Sleep(3000);
			cout << "Innkeeper starting shuffle thimbles" << endl;
			Sleep(7000);
#endif
			Getback:
			cout << "Innkeeper: And stop, choose one!" << endl << "--------------------" << endl << "Choose one of the 5 proposed thimbles:" << endl;

			int droppednumber, yournumber;
			droppednumber = 1 + rand() % 5;
			cin >> yournumber;
			cout << endl;
			if (droppednumber == yournumber)
			{
				cout << "Innkeeper: Lets see...you won,ill give you money!" << endl;
			}
			else if (droppednumber != yournumber && yournumber<=5)
			{

				cout << "Innkeeper: Lets see..." << endl;
				Sleep(3000);
				cout << "the ball was in the " << droppednumber << " thimble" << endl;
				Sleep(3000);
				cout << "you lose, ill take your boots!" << endl;

			}
			else if (yournumber>5)
			{
				cout << "write a correct choise!" << endl;
				goto Getback;
			}
		}
		else if (whatthegame == "cards")
		{
#ifdef DEBUG
			cout << "Innkeeper: I have a deck consisting of cards above 10 of all suits." << endl;
			Sleep(3000);
			cout << "I draw one card from this deck, and you have to guess which card it is." << endl;
			Sleep(5000);
			cout << "If you guess the card or the suit, you'll get a pie, and if you guess everything right away, you'll get a month's supply of kvass! " << endl;
			Sleep(7000);
			cout << "BUT! If you guessed nothing, you owe me 100 gold." << endl;
			Sleep(3000);
			cout << "I hope I explained it well, and now I take out the card" << endl;
			Sleep(3000);
			cout << "Innkeeper pulled out a card" << endl;
			Sleep(2000);
#endif
			srand(time(NULL));
			int randcard, randsuit;
			string suit, card,yourcard,yoursuit;
			randcard = 1 + rand() % 4;
			randsuit = 1 + rand() % 4;

			if (randsuit == 1)
			{
				suit = "spades";
			}

			else if (randsuit == 2)
			{
				suit = "diamonds";
			}

			else if (randsuit == 3)
			{
				suit = "hearts";
			}

			else if (randsuit == 4)
			{
				suit = "clubs";
			}



			if (randcard == 1)
			{
				card = "jack";
			}

			else if (randcard == 2)
			{
				card = "queen";
			}

			else if (randcard == 3)
			{
				card = "king";
			}

			else if (randcard == 4)
			{
				card = "ace";
			}
			cout << "Tell your fortune! Which the card:" << endl << "--------------------" << endl << "The choise is given: jack, queen, king, ace" << endl;
			cin >> yourcard;
			cout << "And which the suit:" << endl << "--------------------" << endl << "The choise is given: spades, hearts, diamonds, clubs " << endl;
			cin >> yoursuit;
			if (yourcard == card && yoursuit == suit)
			{
				cout << "Oh my gosh, youre so lucky man,you guess the card" << endl;
			}
			else if (yourcard == card || yoursuit == suit)
			{
				cout << "WOW youre almost guess the card:  " << suit << " " << card << endl;
			}
			else if (yourcard != card || yoursuit != suit)
			{
				cout << "Haha, youre loose ive get your boots!" << endl;
				cout<<"Hidden card:  "<< suit << " " << card << endl;
			}
			
		}
		else
		{
			cout << "write a correct choise!" << endl;
			goto Link;
		}
	}
	else if (choose =="no")
	{
		cout << "Innkeeper: As you wish...see you later, wanderer" << endl;
	}
	else
	{
		cout << "write a correct choise!" << endl;
		goto buck;
	}

}
