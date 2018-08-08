#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

void CardGameWelcome(void);
string Player1, Player2, Player3;
string Get2PlayerNames(void); //array
string Get3PlayerNames(void); //array
void WinnerWinner2(int, int, string, string); // If Else Statement
void WinnerWinner3(int, int, int, string, string, string); // If Else Statement


int main(void)

{
	string Continue;
	int PlayNum;
	int Player1Score = 0;
	int Player2Score = 0;
	int Player3Score = 0;
	int Player1Total = 0;
	int Player2Total = 0;
	int Player3Total = 0;

	CardGameWelcome();

	cout << " Enter Number of Players " << endl;
	cin >> PlayNum;
	switch (PlayNum)
	case 2:

	{
		Get2PlayerNames();

		do
		{
			/////Players enter their score for the round and it is added to their total score//
			cout << "Enter " << Player1 << "'s score" << endl;
			cin >> Player1Score;
			Player1Total = Player1Total + Player1Score;
			cout << "Enter " << Player2 << "'s score" << endl;
			cin >> Player2Score;
			Player2Total = Player2Total + Player2Score;

			//Players decide if they want to continue to another round//
			cout << "Continue?" << endl;
			cin >> Continue;
		} while (Continue == "Yes" || Continue == "yes");

		cout << Player1 << "'s Total is:" << Player1Total << endl;
		cout << Player2 << "'s Total is:" << Player2Total << endl;
		
		//Player with fewest points is declared winner//
		WinnerWinner2(Player1Total, Player2Total, Player1, Player2);

		break;

	default:
		Get3PlayerNames();
		do
		{
			/////Players enter their score for the round and it is added to their total score//
			cout << "Enter " << Player1 << "'s score" << endl;
			cin >> Player1Score;
			Player1Total = Player1Total + Player1Score;
			cout << "Enter " << Player2 << "'s score" << endl;
			cin >> Player2Score;
			Player2Total = Player2Total + Player2Score;
			cout << "Enter " << Player3 << "'s score" << endl;
			cin >> Player3Score;
			Player3Total = Player3Total + Player3Score;


			//Players decide if they want to continue to another round//
			cout << "Continue?" << endl;
			cin >> Continue;
		} while (Continue == "Yes" || Continue == "yes" || Continue == "YES");

		cout << Player1 << "'s Total is:" << Player1Total << endl;
		cout << Player2 << "'s Total is:" << Player2Total << endl;
		cout << Player3 << "'s Total is:" << Player3Total << endl;

		//Player with fewest points is declared winner//
		WinnerWinner3(Player1Total, Player2Total, Player3Total, Player1, Player2, Player3);

		break;
	}

	system("pause");
	return 0;
}

///////////////////////Player Names via an array/////////////////////

string Get2PlayerNames(void)
{
	string stringPlayerName[2];

	for (int i = 0; i < 2; i++)
	{
		cout << "Please enter Player" << i + 1 << "'s Name" << endl;
		cin >> stringPlayerName[i];
	}

	Player1 = stringPlayerName[0];
	Player2 = stringPlayerName[1];
	return Player1, Player2;

}
string Get3PlayerNames(void)
{
	string stringPlayerName[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Please enter Player" << i + 1 << "'s Name" << endl;
		cin >> stringPlayerName[i];
	}

	Player1 = stringPlayerName[0];
	Player2 = stringPlayerName[1];
	Player3 = stringPlayerName[2];
	return Player1, Player2, Player3;

}

///////////////////////Winner determined via If Else Statements/////////////////////

void WinnerWinner2(int Player1Total, int Player2Total, string Player1, string Player2)
{
	if (Player1Total > Player2Total)
	{
		cout << Player2 << " Wins!" << endl;
	}
	else
	{
		cout << Player1 << " Wins!" << endl;
	}
}

void WinnerWinner3(int Player1Total, int Player2Total, int Player3Total, string Player1, string Player2, string Player3)
{
	if (Player1Total < Player2Total)
	{
		if (Player1Total < Player3Total)
		{
			cout << Player1 << " Wins!" << endl;
		}
		else
		{
			cout << Player3 << " Wins!" << endl;
		}
	}
	else
	{
		if (Player2Total < Player3Total)
		{
			cout << Player2 << " Wins!" << endl;
		}
		else
		{
			cout << Player3 << " Wins!" << endl;
		}
	}
}
/////////////////////////////////////

void CardGameWelcome(void)
{
	cout << "                               _____                      " << endl;
	cout << "   _____                _____ |6    |                     " << endl;
	cout << "  |2    | _____        |5    || * * |                     " << endl;
	cout << "  |  *  ||3    | _____ | * * || * * | _____               " << endl;
	cout << "  |     || * * ||4    ||  *  || * * ||7    |              " << endl;
	cout << "  |  *  ||     || * * || * * ||____9|| * * | _____        " << endl;
	cout << "  |____Z||  *  ||     ||____S|       |* * *||8    | _____ " << endl;
	cout << "         |____E|| * * |              | * * ||* * *||9    |" << endl;
	cout << "                |____h|              |____L|| * * ||* * *|" << endl;
	cout << "                                            |* * *||* * *|" << endl;
	cout << "   ~~~ Let's Play! ~~~                      |____8||* * *|" << endl;
	cout << "                                                   |____6|" << endl;

}
