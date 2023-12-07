#include <iostream>
using namespace std;
char input[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
int ttt()
{
	if (input[0] == input[1] && input[1] == input[2])
	{
		if (input[0] == 'X')
			return 1;
		else
			return 2;
	}
	else if (input[3] == input[4] && input[4] == input[5])
	{
		if (input[3] == 'X')
			return 1;
		else
			return 2;
	}
	else if (input[6] == input[7] && input[7] == input[8])
	{
		if (input[6] == 'X')
			return 1;
		else
			return 2;
	}
	else if (input[0] == input[3] && input[3] == input[6])
	{
		if (input[0] == 'X')
			return 1;
		else
			return 2;
	}
	else if (input[1] == input[4] && input[4] == input[7])
	{
		if (input[1] == 'X')
			return 1;
		else
			return 2;
	}
	else if (input[2] == input[5] && input[5] == input[8])
	{
		if (input[2] == 'X')
			return 1;
		else
			return 2;
	}
	else if (input[0] == input[4] && input[4] == input[8])
	{
		if (input[0] == 'X')
			return 1;
		else
			return 2;
	}
	else if (input[2] == input[4] && input[4] == input[6])
	{
		if (input[2] == 'X')
			return 1;
		else
			return 2;
	}
	else if (input[0] == input[3] && input[3] == input[6])
	{
		if (input[0] == 'X')
			return 1;
		else
			return 2;
	}
	else
		return 0;
}

void mark(int player, int box)
{
	if (player == 1)
	{

		input[box] = 'X';
	}
	else
		input[box] = 'Y';
}

void display()
{
	for (int i = 0; i < 9; i++)
	{
		cout << input[i] << "\t";
		if (i == 2 || i == 5 || i == 8)
			cout << "\n";
	}
}
int main()
{
	int player1 = 1, player2 = 2;

	int box, result = 0, flag = 0;

	cout << "Game Setup:\nThe game is played on a 3x3 grid.\n with position numbers: \n 0		1		2 \n 3		4		5 \n 6		7		8 \n  Two players participate, one using -X- and the other using -O-\nObjective:\nThe goal is to create a line of three of your symbols (either -X- or -O-) horizontally, vertically, or diagonally.\nTaking Turns:\n\nPlayers take turns placing their symbol on an empty spot on the grid.The first player is usually assigned -X- and the second player is assigned -O-\nWinning the Game:\nThe game ends when one player successfully forms a line of three of their symbols.The line can be horizontal, vertical, or diagonal.\nDraw (Tie):\nIf the entire grid is filled, and no player has formed a line of three, the game is a draw (also known as a tie).Game Etiquette:\nBe sportsmanlike and enjoy the game, win or lose.Respect your opponent's moves and decisions.Starting a New Game:\nAfter a game is concluded, players may choose to start a new game.Now that you know the rules, it's time to jump into the action! Whether you're playing with friends or challenging our AI opponent, have a great time playing Tic Tac Toe. May your moves be strategic and your victories sweet!" << endl;

	for (int i = 1; i < 5; i++)
	{
		cout << "\n Player no. " << player1 << " Enter the Box position : ";
		cin >> box;
		mark(player1, box);
		display();

		result = ttt();
		if (result == 1)
		{
			cout << "\n Congratualtions! player no. " << player1 << " has Won ";
			flag = 1;
			break;
		}
		else if (result == 2)
		{
			cout << "\n Congratualtions! player no. " << player2 << " has Won ";
			flag = 1;
			break;
		}

		cout << "\n Player no. " << player2 << "Enter the Box Position : ";
		cin >> box;
		mark(player2, box);
		display();

		result = ttt();
		if (result == 1)
		{
			cout << "\n Congratualtions! player " << player1 << " has Won ";
			flag = 1;
			break;
		}
		else if (result == 2)
		{
			cout << "\n Congratualtions! player " << player2 << " has Won ";
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << " \n Sorry, The game is a draw ";

	return 0;
}